#include <iostream>
#include <cmath>
#include "trzecie.hpp"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void kwadrat(float a, float b, float c)
{
	float delta;
	float m_p, m_d;
	delta = (b*b) - (4*a*c);
	if(delta > 0)
	{
		delta = sqrt(delta);
		m_p = ( (-b) - delta) / (2*a);
		m_d = ( (-b) + delta) / (2*a);
		cout << "Miejsce pierwsze: " << m_p <<endl;
		cout << "Miejsce drugie: " << m_d << endl;
	}
	else if(delta ==0)
	{
		m_p = (-b)/a;
		cout << "Miejsce zerowe: " << m_p << endl;
	}
	else
	{
		cout << "Brak miejsc zerowych";
	}
}
