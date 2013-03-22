@echo off

setlocal
set curr=%CD%

cd ../sourcemod-compiler
set compdir=%CD%
cd %curr%
"%compdir%/spcomp.exe" AdminMod.sp -oPVKIIAdminMod.smx

cd %curr%
endlocal
