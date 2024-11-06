@echo off

REM msbuild myproject.vcxproj /p:configuration=debug
REM msbuild myproject.vcxproj /p:configuration=debug /p:platform=win32
REM msbuild myproject.vcxproj /p:PreferredToolArchitecture=x64
REM msbuild myproject.vcxproj /p:PlatformToolset=v110_xp /t:rebuild
msbuild myproject.vcxproj /p:configuration=release /p:platform=x64