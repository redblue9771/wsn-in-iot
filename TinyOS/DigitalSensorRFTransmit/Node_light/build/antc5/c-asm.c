//#pragma userclass (code = code)




typedef signed char int8_t;
typedef short int16_t;
typedef long int32_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned long uint32_t;

sbit EA = 0xAF;
sfr WDCTL = 0xC9;
sfr P1_DIR = 0xFE;
sfr DPH1 = 0x85;
sfr DPL1 = 0x84;
sfr DPS = 0x92;

sbit P0_0 = 0x80;
sbit P0_1 = 0x81;
sbit P0_4 = 0x84;
sbit P0_5 = 0x85;
sbit P0_6 = 0x86;
sbit P0_7 = 0x87;
sbit P1_6 = 0x96;
sbit P1_7 = 0x97;
sbit P2_0 = 0xA0;
sbit P2_1 = 0xA1;
sbit P2_2 = 0xA2;

#pragma asm

#if 0
OLED_CLK_PIN 	EQU P0_1  
OLED_DATA_PIN 	EQU P0_0
OLED_RESET_PIN 	EQU P0_4
OLED_DC_PIN 	EQU P2_0
OLED_CS_PIN 	EQU P1_7
#else
/*
OLED_CLK_PIN 	EQU P2_2
OLED_DATA_PIN 	EQU P2_1
//OLED_CLK_PIN 	EQU P0_6
//OLED_DATA_PIN 	EQU P0_7
OLED_RESET_PIN 	EQU P2_0
OLED_DC_PIN 	EQU P0_1
OLED_CS_PIN 	EQU P0_0
*/
OLED_CLK_PIN 	EQU P0_6
OLED_DATA_PIN 	EQU P0_7
OLED_RESET_PIN 	EQU P0_0
OLED_DC_PIN 	EQU P0_1
OLED_CS_PIN 	EQU P0_5
#endif
	//;;*********************************
	//;;	_oled_write_cmd
	//;;*********************************
	
	//;;we put data into R2, R3 uses to loop
	
CASM 	SEGMENT CODE
		RSEG	CASM 	

	USING 0	 

_oled_write_cmd:	
	SETB	OLED_CS_PIN
	CLR		OLED_CLK_PIN
	CLR		OLED_DATA_PIN
	CLR		OLED_DC_PIN
	
	CLR		OLED_CS_PIN
	
	MOV		A,R2
	PUSH	AR3
	MOV		R3,#8
_oled_write_cmd_loop:
	RLC		A
	JC		_oled_write_cmd_bit_high
	
_oled_write_cmd_bit_low:
	CLR		OLED_DATA_PIN
	AJMP	_oled_write_cmd_bit_end
	
_oled_write_cmd_bit_high:
	SETB	OLED_DATA_PIN
	
_oled_write_cmd_bit_end:
	CLR		OLED_CLK_PIN	
	SETB	OLED_CLK_PIN
	
	DJNZ	R3, _oled_write_cmd_loop
	
	POP		AR3
	
	SETB	OLED_CS_PIN
	CLR		OLED_DATA_PIN
	CLR		OLED_CLK_PIN
	CLR		OLED_DC_PIN
	//;; return
	RET

	//;;*********************************
	//;;	_oled_write_date
	//;;*********************************
	
_oled_write_data:
	//;;we put data into R2, R3 uses to loop
	SETB	OLED_CS_PIN
	CLR		OLED_CLK_PIN
	CLR		OLED_DATA_PIN
	SETB	OLED_DC_PIN
	CLR		OLED_CS_PIN
	
	MOV		A,R2
	PUSH	AR3
	MOV		R3,#8
_oled_write_data_loop:
	RLC		A
	JC		_oled_write_data_bit_high
	
_oled_write_data_bit_low:
	CLR		OLED_DATA_PIN
	AJMP	_oled_write_data_bit_end
	
_oled_write_data_bit_high:
	SETB	OLED_DATA_PIN
	
_oled_write_data_bit_end:
	CLR		OLED_CLK_PIN
	SETB	OLED_CLK_PIN
	
	DJNZ	R3, _oled_write_data_loop
	
	POP		AR3
	
	SETB	OLED_CS_PIN
	CLR		OLED_DATA_PIN
	CLR		OLED_CLK_PIN
	CLR		OLED_DC_PIN
	//;; return
	RET

#pragma endasm

void OledP__write_buf(uint8_t val)
{

#pragma asm
	PUSH	AR2	 
	MOV		A,R7
	MOV		 R2,A	
	LCALL _oled_write_data
	POP 	AR2
#pragma endasm
	
}

void OledP__write_cmd(uint8_t val)
{

#pragma asm
	PUSH	AR2	 
	MOV		A,R7
	MOV		 R2,A	
	LCALL _oled_write_cmd
	POP 	AR2
#pragma endasm
	
}

void OledP__do_cls()
{
	
#pragma asm

	SETB	OLED_CS_PIN
	CLR		OLED_CLK_PIN
	CLR		OLED_DATA_PIN
	SETB	OLED_DC_PIN
	CLR		OLED_CS_PIN
	
_oled_do_cls:
	MOV 	R5,#128
_oled_do_cls_loop_big:	
	MOV 	R4,#128	
_oled_do_cls_loop_small:	
	MOV		R3,#16
_oled_do_cls_loop_byte:
	
	CLR		OLED_CLK_PIN
	SETB	OLED_CLK_PIN

	NOP
	NOP
	NOP
	NOP
	NOP
	NOP
	NOP
	NOP
	
	CLR		OLED_DATA_PIN
	
	DJNZ	R3, _oled_do_cls_loop_byte
	DJNZ	R4, _oled_do_cls_loop_small
	DJNZ	R5, _oled_do_cls_loop_big
	
	SETB	OLED_CS_PIN
	CLR		OLED_DATA_PIN
	CLR		OLED_CLK_PIN
	CLR		OLED_DC_PIN	
	
#pragma endasm
}

void OledP__do_draw_char(uint8_t *p, uint8_t *cc, uint8_t *cb)
{
	// p -> R3 ,  cc -> R2 , cb -> R1

#pragma asm
	
	MOV 	R5,#16
_do_draw_byte_loop:
	MOV		A,R3	
	MOV		R0,A
	MOVX 	A,@R0
	INC		R3
	MOV		R4,#8
_do_draw_bit_loop:
	RLC		A
	JC		_do_draw_bit_loop_high
_do_draw_bit_loop_low:
	PUSH	ACC
	MOV		A,R2	
	MOV		R0,A	
	AJMP	_do_draw_bit_loop_end
_do_draw_bit_loop_high:
	PUSH	ACC
	MOV		A,R1	
	MOV		R0,A	
_do_draw_bit_loop_end:
	PUSH 	AR2
	MOVX 	A,@R0
	MOV		R2,A
	LCALL 	_oled_write_data
	INC		R0
	MOVX 	A,@R0
	MOV		R2,A
	LCALL 	_oled_write_data
	INC		R0
	MOVX 	A,@R0	
	MOV		R2,A
	LCALL 	_oled_write_data
	POP 	AR2
	POP 	ACC
	DJNZ	R4, _do_draw_bit_loop
	DJNZ	R5, _do_draw_byte_loop
	
#pragma endasm	
	
}
