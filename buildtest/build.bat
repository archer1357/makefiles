@echo off

REM msbuild myproject.vcxproj /p:configuration=debug
REM msbuild myproject.vcxproj /p:configuration=debug /p:platform=win32
REM msbuild myproject.vcxproj /p:PreferredToolArchitecture=x64
REM msbuild myproject.vcxproj /p:PlatformToolset=v110_xp /t:rebuild
msbuild MathLibrary.vcxproj /p:configuration=release /p:platform=x64 /p:configurationtype=DynamicLibrary
msbuild myproject.vcxproj /p:configuration=release /p:platform=x64 /p:configurationtype=Application

msbuild MathLibrary2.vcxproj /p:configuration=release /p:platform=x64 /p:configurationtype=DynamicLibrary