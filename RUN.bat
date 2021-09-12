@echo off
:start
::Name for CMD window
set serverName=Local DayZ Server
::Server files location
set serverLocation="F:\Steam\steamapps\common\DayZServer"
::Server Port
set serverPort=2302
::Server config
set serverConfig=serverDZ.cfg
::Server profile folder
set serverProfile=profiles
::Logical CPU cores to use (Equal or less than available)
set serverCPU=8
::mods (@modName;@anotherModname;@mod)
set mods=@CF;@VPPAdminTools;
::serverMods (@modName;@anotherModname;@mod)
set serverMods=


:: START SCRIPT
::Sets title for terminal (DONT edit)
title %serverName% batch
:: switch to DayZServer location (DONT edit)
cd "%serverLocation%"
echo (%time%) %serverName% started.
::Launch parameters (edit end: -config=|-port=|-profiles=|-doLogs|-adminLog|-netLog|-freezeCheck|-filePatching|-BEpath=|-cpuCount=)
start DayZServer_x64.exe "-servermod=%serverMods%"   "-mod=%mods%" -instanceId=1 -config=%serverConfig% -profiles=%serverProfile% -port=%serverPort% -cpuCount=%serverCPU% -noFilePatching -dologs -adminlog -freezecheck
::Time in seconds before kill server process (14400 = 4 hours)
timeout 14390
taskkill /im DayZServer_x64.exe /F
::Time in seconds to wait before..
timeout 10
::Go back to the top and repeat the whole cycle again
goto start