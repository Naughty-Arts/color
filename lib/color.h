#ifndef _COLOR_H_
#define _COLOR_H_

typedef struct
{
	float r;
	float g;
	float b;
} Color;

extern Color black;
extern Color white;
extern Color gray;

extern Color red;
extern Color green;
extern Color blue;

extern Color cyan;
extern Color yellow;
extern Color magenta;

Color color_add(Color c1, Color c2);
Color color_subtract(Color c1, Color c2);
Color color_times(Color c, float a);
Color color_hadamard(Color c1, Color c2);

char* color_string(Color color);

#endif
