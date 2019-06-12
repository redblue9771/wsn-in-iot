#pragma userclass (code = boot)




typedef signed char int8_t;
typedef short int16_t;
typedef long int32_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned long uint32_t;

sbit EA = 0xAF;
sfr MEMCTR = 0xC7;
sfr FMAP = 0x9F;
//sfr FADDRH = 0xAD;
//sfr FADDRL = 0xAC;
//sfr FCTL = 0xAE;
//sfr FWT = 0xAB;
sfr WDCTL = 0xC9;
sfr P1_DIR = 0xFE;
sfr DPH1 = 0x85;
sfr DPL1 = 0x84;
sfr DPS = 0x92;



/*
#define CC2430_MEMCTR_FMAP_MASK  		0xCF
#define CC2430_MEMCTR_FMAP_OFFSET	4
#define CC2430_CODE_MAP_TO(n)		{ MEMCTR = (MEMCTR&CC2430_MEMCTR_FMAP_MASK) | (n<< CC2430_MEMCTR_FMAP_OFFSET); }
#define CC2430_CODE_MAP_SAVE(v)	 { (v) = MEMCTR; }
#define CC2430_CODE_MAP_LOAD(v)	 { MEMCTR = (v); }
*/

#pragma asm




ABOOT_XDATA SEGMENT 'CODE_BOOT'
	 RSEG	ABOOT_XDATA 
eraseFunctionBufferStart:
	DB	075H
	DB	0AEH
	DB	001H
	DB	000H
	DB	0E5H
	DB	0AEH
	DB	054H
	DB	080H
	DB	070H
	DB	0FAH
	DB	022H
eraseFunctionBufferEnd:


writeFunctionBufferStart:
	DB 07BH
	DB 001H
	DB 010H
	DB 0AFH
	DB 002H
	DB 07BH
	DB 000H
	DB 0C0H
	DB 083H
	DB 0C0H
	DB 082H
	DB 0C0H
	DB 085H
	DB 0C0H
	DB 084H
	DB 0C0H
	DB 092H
	DB 0EAH
	DB 0F5H
	DB 083H
	DB 0E9H
	DB 0F5H
	DB 082H
	DB 075H
	DB 092H
	DB 001H
	DB 075H
	DB 085H
	DB 062H
	DB 075H
	DB 084H
	DB 070H
	DB 0E0H
	DB 054H
	DB 080H
	DB 070H
	DB 0FBH
	DB 074H
	DB 002H
	DB 0F0H
	DB 0ECH
	DB 060H
	DB 027H
	DB 07AH
	DB 040H
	DB 079H
	DB 004H
	DB 075H
	DB 092H
	DB 000H
	DB 0E0H
	DB 0A3H
	DB 075H
	DB 092H
	DB 001H
	DB 075H
	DB 085H
	DB 062H
	DB 075H
	DB 084H
	DB 073H
	DB 0F0H
	DB 0D9H
	DB 0EFH
	DB 074H
	DB 000H
	DB 0F0H
	DB 075H
	DB 085H
	DB 062H
	DB 075H
	DB 084H
	DB 070H
	DB 0E0H
	DB 054H
	DB 040H
	DB 070H
	DB 0FBH
	DB 0DAH
	DB 0DDH
	DB 0DCH
	DB 0D9H
	DB 0EDH
	DB 060H
	DB 029H
	DB 0EDH
	DB 054H
	DB 0FCH
	DB 003H
	DB 003H
	DB 0FDH
	DB 079H
	DB 004H
	DB 075H
	DB 092H
	DB 000H
	DB 0E0H
	DB 0A3H
	DB 075H
	DB 092H
	DB 001H
	DB 075H
	DB 085H
	DB 062H
	DB 075H
	DB 084H
	DB 073H
	DB 0F0H
	DB 0D9H
	DB 0EFH
	DB 074H
	DB 000H
	DB 0F0H
	DB 075H
	DB 085H
	DB 062H
	DB 075H
	DB 084H
	DB 070H
	DB 0E0H
	DB 054H
	DB 040H
	DB 070H
	DB 0FBH
	DB 0DDH
	DB 0DDH
	DB 0D0H
	DB 092H
	DB 0D0H
	DB 084H
	DB 0D0H
	DB 085H
	DB 0D0H
	DB 082H
	DB 0D0H
	DB 083H
	DB 0EBH
	DB 060H
	DB 002H
	DB 0D2H
	DB 0AFH
	DB 022H
writeFunctionBufferEnd:

ABOOT_RAM SEGMENT XDATA
	RSEG	ABOOT_RAM

eraseFunctionBuffer EQU 00800H
writeFunctionBuffer EQU 008F0H


write_cache EQU	01000H

FADDRL	EQU		06271H
FADDRH	EQU		06272H
FCTL	EQU		06270H


#pragma endasm


//uint8_t write_cache[0x0800];

void aBootInit()
{
#pragma asm

	;Feed watchdog
	MOV		WDCTL, #0A8H
	MOV		WDCTL, #058H

	MOV  	R4,#HIGH (eraseFunctionBuffer)
	MOV  	R3,#LOW (eraseFunctionBuffer)	

	MOV  	R2,#HIGH (eraseFunctionBufferStart)
	MOV  	R1,#LOW (eraseFunctionBufferStart)

	MOV		R5,#eraseFunctionBufferEnd-eraseFunctionBufferStart

erase_copy_loop:
	MOV		DPS, #0
	MOV     DPH, R2
	MOV     DPL, R1
	CLR		A
	MOVC 	A,@A+DPTR
	INC 	DPTR
	MOV     R2,DPH
	MOV     R1,DPL

	MOV     DPH,R4
	MOV     DPL,R3
	MOVX 	@DPTR,A
	INC 	DPTR
	MOV     R4,DPH
	MOV     R3,DPL

	DEC		R5
	MOV		A,R5
	JNZ		erase_copy_loop

	MOV  	R4,#HIGH (writeFunctionBuffer)
	MOV  	R3,#LOW (writeFunctionBuffer)	

	MOV  	R2,#HIGH (writeFunctionBufferStart)
	MOV  	R1,#LOW (writeFunctionBufferStart)

	MOV		R5,#writeFunctionBufferEnd-writeFunctionBufferStart

write_copy_loop:
	MOV		DPS, #0
	MOV     DPH,R2
	MOV     DPL,R1
	CLR		A
	MOVC 	A,@A+DPTR
	INC 	DPTR
	MOV     R2,DPH
	MOV     R1,DPL

	MOV     DPH,R4
	MOV     DPL,R3
	MOVX 	@DPTR,A
	INC 	DPTR
	MOV     R4,DPH
	MOV     R3,DPL

	DEC		R5
	MOV		A,R5
	JNZ		write_copy_loop
#pragma endasm
}

void aBootCopy()
{
#pragma asm
	MOV		R3, #000H   ;Dst page number
	MOV		R0, #020H	;Src page number 

aBootCopy_page:
	;Feed watchdog
	MOV			WDCTL, #0A8H
	MOV			WDCTL, #058H

	;###### Read page to cache

	;Setup MEMCTR
	MOV		A, R0
	RR		A
	RR		A
	RR		A
	RR		A
	ANL		A, #007H
	MOV		MEMCTR, A
	MOV		FMAP, A		;Setup flash map???

	;Setup source
	MOV		A, R0
	ANL		A, #00FH
	RL		A
	RL		A
	RL		A
	ORL 	A,#080H
	MOV		DPH1, A
	MOV		DPL1, #000H
		
	;Setup destination
	MOV		DPH, #HIGH(write_cache)
	MOV		DPL, #LOW(write_cache)

	MOV		R1, #010H
aBootCopy_page_read_big:

	;Setup page copy information
	MOV		R2, #080H
aBootCopy_page_read_small:
	MOV		DPS, #1
	CLR		A
	MOVC	A, @A+DPTR
	INC		DPTR

	MOV		DPS, #0
	MOVX	@DPTR, A
	INC		DPTR
	DJNZ	R2, aBootCopy_page_read_small
	DJNZ	R1, aBootCopy_page_read_big

	;###### Erase page
#if 1
	;Set erase page
    MOV		DPS, #1
	MOV		DPH1, #HIGH(FADDRH)
	MOV		DPL1, #LOW(FADDRH)
	MOV		A, R3
	RL		A
	MOVX	@DPTR, A


	;try to wait erase loop
    MOV     DPH1, #HIGH(FCTL)
    MOV     DPL1, #LOW(FCTL)

waitEraseLoop0:  
	MOVX		A, @DPTR
    ANL			A, #80H
    JNZ			waitEraseLoop0

    MOV			A, #01H
    MOVX		@DPTR, A
    NOP

waitEraseLoop1:  
	MOVX		A, @DPTR
    ANL			A, #80H
    JNZ			waitEraseLoop1

#else
	MOV		A, MEMCTR
	ORL		A, #008H
	MOV		MEMCTR, A

	PUSH	AR0
	PUSH	AR3
	LCALL 	aBootCopy_call_erase
	POP		AR3
	POP		AR0
	
	MOV		A, MEMCTR
	ANL		A, #0F7H
	MOV		MEMCTR, A
#endif


	;###### Write Page

	;Set page -> FADDRH
    MOV		DPS, #1
	MOV		DPH1, #HIGH(FADDRH)
	MOV		DPL1, #LOW(FADDRH)
	MOV		A, R3
	RL		A
	MOVX	@DPTR, A

	;Set offset -> FADDRL
	MOV		DPH1, #HIGH(FADDRL)
	MOV		DPL1, #LOW(FADDRL)
	CLR		A
	MOVX	@DPTR, A
	
	; R1 (LSB) and R2 (MSB) contains the start address of the buffer from which the program can be run in RAM
	MOV		R2, #HIGH(write_cache)
	MOV		R1, #LOW(write_cache)
	
	MOV		R4, #008H
	MOV		R5, #000H
	
	;Setup MEMCTR
	MOV		A, MEMCTR
	ORL		A, #008H
	MOV		MEMCTR, A
	
	
	PUSH	AR0
	PUSH	AR3
	LCALL 	aBootCopy_call
	POP		AR3
	POP		AR0

	MOV		A, MEMCTR
	ANL		A, #0F7H
	MOV		MEMCTR, A
	
aBootCopy_page_end:
	MOV		A,R3
	JNZ		aBootCopy_page_end_1
	INC 	R0
	INC 	R3	
aBootCopy_page_end_1:
	INC 	R0
	INC 	R3

	MOV		A,R3
	SUBB	A,#01FH
	JZ		aBootCopy_end
	JMP		aBootCopy_page
	
aBootCopy_call:
	MOV		DPS, #0
	MOV     DPH, #HIGH(writeFunctionBuffer)
	ORL		DPH, #080H		;Map SRAM address to CODE
	MOV     DPL, #LOW(writeFunctionBuffer)
	CLR     A
	JMP     @A+DPTR

aBootCopy_call_erase:
	MOV     DPH,#HIGH(eraseFunctionBuffer)
	MOV     DPL,#LOW(eraseFunctionBuffer)
	CLR     A
	JMP     @A+DPTR

aBootCopy_end:
	NOP

#pragma endasm
}

void aBootReset()
{
	WDCTL = 0x00;
	WDCTL = 0x0B;
	while(1);
}

void aBootReprogram()
{
	EA = 0;

	/* Set max watchdog timeout */
	WDCTL = 0x08;
	
	aBootInit();
	aBootCopy();
	aBootReset();
}

void AnpAbootP__aBootReprogram()
{
	aBootReprogram();
}


