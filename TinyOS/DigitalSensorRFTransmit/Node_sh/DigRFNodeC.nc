configuration DigRFNodeC
{

}
implementation
{
	components DigRFNodeP;
	
	components SHTC;
	DigRFNodeP.SHT -> SHTC;

	components MainC;

	DigRFNodeP.Boot -> MainC.Boot;

	components new PlatformMacC(123);

	components AtosMacC;
	DigRFNodeP.AtosControl -> AtosMacC;

	DigRFNodeP.AMPacket -> PlatformMacC;
	DigRFNodeP.Packet -> PlatformMacC;
	DigRFNodeP.AMSend -> PlatformMacC;
	DigRFNodeP.Receive ->PlatformMacC;
	
	components new TimerMilliC() as Timer1;
	DigRFNodeP.Timer1 -> Timer1;
}
