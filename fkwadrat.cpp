#include <iostream>
#include <cmath>
#include "kwadratowa.cpp"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void fkanoniczna()
{
	float p, q,a;
	cout << "Program oblicza miejsce zerowe z funkcji kanonicznej" << endl;
	cout << "Podaj a: "; cin >> a;
	cout << "Podaj p: "; cin >> p;
	cout << "podaj q: "; cin >>q;

	float b,c;
	// y = a(x-p)^2 + q = ax^2 - 2apx + ap^2 + q
	//                    ax^2     bx        c  
	b = ((-2) * a *p);
	c = (a*pow(p,2) + q);
	kwadrat(a,b,c);	
 }

