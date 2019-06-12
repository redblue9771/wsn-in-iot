#include "SensorCollection.h"
#define DBG_LEV 9
module ADSenRFNodeP
{
	uses 
	{
		interface Boot;
		
		interface AdcControl as ADSensorControl;
		interface Read<int16_t> as ADSensorRead;
		
		interface AtosControl;
		
		interface AMSend;
		interface Receive;
		interface AMPacket;
		interface Packet;
	}
	uses interface Timer<TMilli> as Timer1; 
}
implementation
{
	message_t m_sensor_msg;
	uint sensor_retry = 0;
	bool m_sensoring = FALSE;
	uint8_t m_sensor_length = 0;
	uint8_t* p_sensor_payload;
	uint16_t dest_address;
	
	task void sensorDataTask()
	{
		call ADSensorControl.enable(ADC_REF_AVDD, ADC_14_BIT, ADC_AIN4);
        call ADSensorRead.read();
	}


	task void sendMsgTask() 
	{
		
		if (call AMSend.send(1, &m_sensor_msg, 2) != SUCCESS)
		{
			post sensorDataTask();
		}
	}
	
	event void AMSend.sendDone(message_t* msg, error_t success)
	{
		ADBG(DBG_LEV, "* Sent%s!\r\n", (success == SUCCESS) ? "OK" : "FAIL");

	}

	/* 节点启动完毕*/
	event void Boot.booted()
	{
		/*开启射频*/
		ADBG(DBG_LEV, "===========boot============\n");
		LED_BLUE_TOGGLE;
		call AtosControl.start();
		/** 定时器1: 持续工作，每隔1s触发一次 */
		call Timer1.startPeriodic(2000);
		p_sensor_payload = call Packet.getPayload(&m_sensor_msg, NULL);
	}


	event void ADSensorRead.readDone(error_t result, int16_t val)
	{
	
		uint8_t sensor_payload[2];
		ADBG(DBG_LEV, "AD Data = %04x\n" ,val);
		
		sensor_payload[0] = val >> 8;
		sensor_payload[1] = val & 0xff;
		
		memcpy(p_sensor_payload, sensor_payload, 2);
		
		if(result == SUCCESS)
		{
			post sendMsgTask();
		}
		else
		{
			post sensorDataTask();
		}

	}

	/*射频接收数据*/
	event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len)
	{
		//LED_BLUE_TOGGLE;
		//if (len != 1)
		//{
		//	return NULL;
		//}

		//ADBG(DBG_LEV, "Receive len = %d payload = %c\n", (int)len, *((char *)payload));
		//if (*(char *)payload == 'y' || *(char *)payload == 'Y')
		//{
			dest_address = call AMPacket.source(msg);
			post sensorDataTask();
		//}
	}
		/** 定时器1的事件处理函数 */
	event void Timer1.fired()
	{
		post sensorDataTask();
	}
}
