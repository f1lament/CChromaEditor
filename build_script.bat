call nuget.exe restore "CChromaEditor.sln"

msbuild.exe /m CChromaEditor.sln /t:CChromaEditorLibrary /p:configuration=release;platform=x86