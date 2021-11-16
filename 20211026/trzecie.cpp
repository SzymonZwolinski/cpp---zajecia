#include <iostream>
#include "Linia2.hpp"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void trzeci()
{
	float a,b,c;
	
	cout <<"Podaj a: "; cin>>a;
	cout <<"podaj b: ";cin>>b;
	cout <<"podaj c: ";cin >>c;
	
	// y = -(a/b)x - (c/b)
	
	float x,y;
	x = -(a/b);
	y = -(c/b);
	liniowa2(x,y);
	
}


