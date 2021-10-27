#include <iostream>
#include "linia2.cpp"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void trzeci(float a, float b, float c)
{
	// y = -(a/b)x - (c/b)
	
	float x,y;
	x = -(a/b);
	y = -(c/b);
	liniowa2(x,y);
	
}

int main()
{
	trzeci(3,3,3);
	return 1;	
}
