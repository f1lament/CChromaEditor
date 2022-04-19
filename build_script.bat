call nuget.exe restore "CChromaEditor.sln"
call "%programfiles(x86)%\Microsoft Visual Studio 14.0\Common7\Tools\VsMSBuildCmd.bat"

msbuild.exe /m CChromaEditor.sln /t:CChromaEditorLibrary /p:configuration=release;platform=x86