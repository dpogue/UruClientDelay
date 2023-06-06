# Yeah, this is awful and should probably be built properly on Windows, but it seemed to work good enough?
all:
	i686-w64-mingw32-g++ dllmain.cpp -o ClientDelay.dll -shared
