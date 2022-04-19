call nuget.exe restore "CChromaEditor.sln"
call "%programfiles(x86)%\Microsoft Visual Studio\2017\Professional\Common7\Tools\VsDevCmd.bat"

msbuild.exe /m CChromaEditor.sln /t:CChromaEditorLibrary /p:configuration=release;platform=x86