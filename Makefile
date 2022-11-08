
test: main.c lib/color.h
	gcc -std=c2x -o build/test.exe main.c

lib/color.h: color.h
	cp color.h lib/color.h

install: lib/color.h
	cp lib/color.h "C:\\libs\\color.h"
