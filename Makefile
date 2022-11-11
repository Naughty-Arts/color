
test: main.c lib/color.h lib/libcolor.a
	gcc -std=c2x -o build/test.exe main.c -L"./lib" -lcolor

lib/color.h: color.h
	cp color.h lib/color.h

lib/libcolor.a: bin/color.o lib/color.h
	ar rcs lib/libcolor.a bin/color.o

bin/color.o: color.c color.h
	gcc -std=c2x -c -o bin/color.o color.c

install: lib/color.h lib/libicolor.a
	cp lib/color.h "C:\\libs\\color.h"
	cp lib/libcolor.a "C:\\libs\\libcolor.a"
