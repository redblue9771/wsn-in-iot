@echo off
@echo Using KEIL to compile TinyOS files to binary

SET C51INC=C:\Keil\C51\INC\Chipcon\;C:\Keil\C51\INC\
SET C51LIB=C:\Keil\C51\LIB
SET CPU_TYPE=CC2430-F128
SET CPU_VENDOR=Chipcon
SET UV2_TARGET=Target 1
SET CPU_XTAL=0x016E3600

SET LINKOBJECT="startup.obj","app.obj","flashread.obj","a-boot-version.obj","a-boot.obj","c-asm.obj"

SET APRO_ID=%1
SET APRO_VER=%2

echo Compiling TinyOS files
@C:\Keil\C51\BIN\C51.EXE "app.c" LARGE OMF2 DEBUG BROWSE PRINT(.\app.lst) OBJECT(.\app.obj) WARNINGLEVEL (0)
@C:\Keil\C51\BIN\C51.EXE "flashread.c" LARGE OMF2 DEBUG BROWSE PRINT(.\flashread.lst) OBJECT(.\flashread.obj) WARNINGLEVEL (0)
@C:\Keil\C51\BIN\C51.EXE "a-boot-version.c" LARGE OMF2 DEBUG BROWSE PRINT(.\a-boot-version.lst) OBJECT(.\a-boot-version.obj) WARNINGLEVEL (0) DEFINE (APRO_ID=%APRO_ID%,APRO_VER=%APRO_VER%)
@C:\Keil\C51\BIN\C51.EXE "a-boot.c" LARGE OMF2 BROWSE DEBUG SRC (.\a-boot.SRC) PRINT(.\a-boot.lst) OBJECT(.\a-boot.obj) WARNINGLEVEL (0)
@C:\Keil\C51\BIN\C51.EXE "c-asm.c" LARGE OMF2 BROWSE DEBUG SRC (.\c-asm.SRC) PRINT(.\c-asm.lst) OBJECT(.\c-asm.obj) WARNINGLEVEL (0)
@C:\Keil\C51\BIN\AX51.EXE "a-boot.src"
@C:\Keil\C51\BIN\AX51.EXE "c-asm.src"

echo Linking all files to binary
@C:\Keil\C51\BIN\LX51.EXE %LINKOBJECT% TO "app" PRINT (app.map) CLASSES(CODE_BANK0(C:0x0000-C:0x06FF), CONST_VERSION(C:0x0700-C:0x07FF), CODE_BOOT(C:0x0800-C:0x0FFF), CODE(C:0x1000-C:0xF7FF), XDATA(X:0x0001-X:0x1EFF), IDATA(I:0-I:0xFF)) REGFILE(app.reg) DISABLEWARNING (15) 
@C:\Keil\C51\BIN\OHX51.EXE "app" 



