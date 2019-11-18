configuration ADSenRFNodeC
{

}
implementation
{
	components ADSenRFNodeP;
	components new AdcC() as ADSensor;

	ADSenRFNodeP.ADSensorControl -> ADSensor;
    ADSenRFNodeP.ADSensorRead -> ADSensor;

	components MainC;

	ADSenRFNodeP.Boot -> MainC.Boot;

	components new PlatformMacC(123);

	components AtosMacC;
	ADSenRFNodeP.AtosControl -> AtosMacC;

	ADSenRFNodeP.AMPacket -> PlatformMacC;
	ADSenRFNodeP.Packet -> PlatformMacC;
	ADSenRFNodeP.AMSend -> PlatformMacC;
	ADSenRFNodeP.Receive ->PlatformMacC;
	
	components new TimerMilliC() as Timer1;
	ADSenRFNodeP.Timer1 -> Timer1;
}
