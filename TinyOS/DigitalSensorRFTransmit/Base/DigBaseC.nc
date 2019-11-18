configuration DigBaseC
{
}
implementation
{
	components DigBaseP as App;
	components MainC;

	App.Boot -> MainC.Boot;



	/* 串口收发组件*/
	components PlatformSerialC;
	App.UartStdControl -> PlatformSerialC;
	App.UartStream -> PlatformSerialC;

	/*活动消息组件*/
    components new PlatformMacC(123);
	components AtosMacC;
	
	App.AtosControl -> AtosMacC;
	App.AMPacket -> PlatformMacC;
	App.Packet -> PlatformMacC;
	
	App.AMSend -> PlatformMacC;
	App.Receive ->PlatformMacC;
	
}
