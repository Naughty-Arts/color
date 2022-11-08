#ifndef _COLOR_H_
#define _COLOR_H_

typedef struct
{
	float r;
	float g;
	float b;
	float a;
} c;

#define cplus(c1, c2) { c1.r + c2.r, c1.g + c2.g, c1.b + c2.b }
#define cplusa(c1, c2) c1.r += c1.r; c1.g += c2.g; c1.b += c2.b
#define cminus(c1, c2) { c1.r - c2.r, c1.g - c2.g, c1.b - c2.b }
#define cminusa (c1, c2) c1.r -= c1.r; c1.g -= c2.g; c1.b -= c2.b
#define ctimes(c1, a) { c1.r * a, c1.g * a, c1.b * a }
#define ctimesa(c1, a) c1.r *= a; c1.g *= a; c1.b *= a
#define chad(c1, c2) { c1.r * c2.r, c1.g * c2.g, c1.b * c2.b }
#define chada(c1, c2) c1.r *= c2.r; c1.g *= c2.g; c1.b *= c2.b
#define cprnt(l, c1) printf("%s: %f, %f, %f, %f\n", l, c1.r, c1.g, c1.b, c1.a)
#define cterm(l, c1) printf("\x1b[38;2;%.0f;%.0f;%.0fm%s\x1b[0m", c1.r * 255, c1.g * 255, c1.b * 255, l)

#define black { 0, 0, 0, 1 }
#define white { 1, 1, 1, 1 }
#define gray { 0.5, 0.5, 0.5, 1 }
#define red { 1, 0, 0, 1 }
#define green { 0, 1, 0, 1 }
#define blue { 0, 0, 1, 1 }
#define cyan { 0, 1, 1, 1 }
#define yellow { 1, 1, 0, 1 }
#define magenta { 1, 0, 1, 1 }

#endif
