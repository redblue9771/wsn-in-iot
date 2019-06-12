COMPONENT=DigRFNodeC

######################

PFLAGS += -DUSE_MODULE_LED

#使用串口调试模块
PFLAGS += -DUART_DEBUG
PFLAGS += -DADBG_LEVEL=9
PFLAGS += -DDBG0
PFLAGS += -DDBG_APP
######################

#射频，不限制地址
PFLAGS += -DNO_RADIO_ADDRESS_REQ

#使用硬件ACK
PFLAGS += -DCC2420_HW_ACKNOWLEDGEMENTS

#链路层使用重发机制
PFLAGS += -DPACKET_LINK

# sht pin :sht data -> 0.1 sht sck ->0.0
#PFLAGS += -DSHT_CC2530_DUAL_RF_PIN_RELOCATE


#使用CC2420射频协议栈
USE_CC2420_STACK = 1

include $(MAKERULES)

