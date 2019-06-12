#include "SensorCollection.h"
#include "SHT.h"
#define DBG_LEV 9
module DigRFNodeP
{
	uses 
	{
		interface Boot;
		
		interface SHT;
		
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
		call SHT.read();
	}


	task void sendMsgTask() 
	{
		
		if (call AMSend.send(1, &m_sensor_msg, 8) != SUCCESS)
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


	event void SHT.readDone(error_t result, uint16_t temperature, uint16_t humidity)
	{
	
		float temp, hum;

		call SHT.calcRealValue(&temp, &hum, temperature, humidity);
		
		
		ADBG_APP("temp: %f, hum: %f\r\n", temp, hum);
		
		memcpy(p_sensor_payload, &temp, 4);
		memcpy(p_sensor_payload + 4, &hum, 4);
		
			
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
