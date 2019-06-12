@echo off
@echo Using KEIL to debug TinyOS files

@taskkill /F /IM "Uv3.exe" /T >tmp 2>tmp2
@taskkill /F /IM "Uv4.exe" /T >tmp 2>tmp2

@echo Start debugging now...
if exist C:\Keil\UV4\Uv4.exe (
@start C:\Keil\UV4\Uv4.exe keilprj.uvproj
) else (

rem @echo Start debugging now...
rem @start D:\Keil\UV3\Uv3.exe keilprj.Uv2
)

)

