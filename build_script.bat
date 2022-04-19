call nuget.exe restore "CChromaEditor.sln"
call "%ProgramFiles(x86)%\Microsoft Visual Studio\2019\Community\Common7\Tools\VsDevCmd.bat"

msbuild.exe /m CChromaEditor.sln /t:CChromaEditorLibrary /p:configuration=release;platform=x86