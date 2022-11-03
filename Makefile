
test: main.c lib/color.h lib/libcolor.a
	gcc -std=c2x -o build/test.exe main.c -L./lib -lcolor

lib/color.h: color.h
	cp color.h lib/color.h

lib/libcolor.a: color.c color.h
	gcc -std=c2x -c color.c -o bin/color.o
	ar rcs lib/libcolor.a bin/color.o

install: lib/color.h lib/libcolor.a
	cp lib/color.h "C:\\libs\\color.h"
	cp lib/libcolor.a "C:\\libs\libcolor.a"
