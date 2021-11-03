#include <iostream>
#include "main.cpp"
#include "fkwadrat.cpp"
#include "trzecie.cpp"
#include "linia2.cpp"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu()
{
	int czy = 1;
	bool kwadr_lini;
	float a,b,c;
	while(czy>0)
	{
		cout << "wpisz 1 aby wprowadzic funkcje liniowa\n2 aby wprowadzic funkcje kwadratowa\n3 aby wprowadzic funkcje kanoniczna\n4 aby wprowadzic funkcje postaci Ax + By +C = 0";
		cin >> kwadr_lini;
		if(kwadr_lini==1)
		{
			
			cout <<"Wprowadz a: "; cin >>a;
			cout <<"Wprowadz b: ";cin >>b;
			liniowa2(a,b);
		}
		if(kwadr_lini==2)
		{
		
			cout << "wprowadz a: "; cin >> a;
			cout <<"Wprowadz b: "; cin >> b;
			cout << "wprowadz c: "; cin >> c;
			kwadratowa_drugie(a,b,c);
		}
		if(kwadr_lini==3)
		{
			fkanoniczna();
		}
		if(kwadr_lini==4)
		{
			trzeci();
		}
		if(kwadr_lini>4 or kwadr_lini<0)
		{
			cout << "blad";
		}
		cout << endl << endl << endl;
		cout <<"Jezeli chcesz powtórzyc program wpisz 1\nJezeli chcesz wyjsc wpisz 0";
		cin >> czy;
		
	}
}

