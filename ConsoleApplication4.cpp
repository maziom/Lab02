#include <iostream>
#include <cmath>
using namespace std;



int main()
{
	/* //zad1
		float a, b, x;
		cout << "Podaj a: ", cin >> a;

		cout << "Podaj b: ", cin >> b;
		if (a == 0)
			if (b == 0)
			 cout << "rownanie Tozsamosciowe\n";
			 else
			  cout << "Równanie sprzeczne";
			 else
			cout << "x = " << -b / a << endl;
		*/

		/* //zad2
		double a, b, c, delta;
		cout << "podaj wspolczynniki rownania a, b, c: " << endl;
		cin >> a >> b >> c;
		if (a == 0)
		cout << "to nie jest rownanie kwadratowe" << endl;
		else
		{
			delta = b * b - 4 * a * c;
			if (delta < 0)
			cout << "rownanie nie ma pierwiastkow" << endl;
			else if (delta == 0)
			{
				cout << "rownanie ma jeden pierwiastek";
			}
			else
			{
				cout << "rownanie ma dwa pierwiastki";
			}
		}
		*/

		/*  //zad3

		double a, b, c, delta, xl, x2;
		cout << "podaj wspolczynniki rownania a, b, c: " << endl;
		cin >> a >> b >> c;
		if (a == 0)
		cout << "to nie jest rownanie kwadratowe" << endl;
		else
		{
			delta = b * b - 4 * a * c;
				if (delta < 0) 
				cout << "rownanie nie ma pierwiastkow" << endl;
				else if (delta == 0)
				{
					xl = -b / (2 * a);
					cout << "x= " << xl << endl;
				}
				else
				{
					xl = (-b - sqrt(delta)) / (2 * a);
					x2 = (-b + sqrt(delta)) / (2 * a);
					cout << "xl=" << xl << "\nx2=" << x2 << endl;
				}
		}
		*/

	/*
	  //zad4
	float x, wynik1, wynik2, wynik3;
	cout << "Podaj x: \n", cin >> x;
	//podpunkt a
	if (x > 0)
		cout << " a(x): " << 2 * x << endl;
	else if (x == 0)
		cout << " a(x): " << 0 << endl;
	else
		cout << " a(x): " << -3 * x << endl;
	//podpunkt b
	if (x >= 1)
		cout << " b(x): " <<x * x << endl;
	else if (x  < 1)
		cout << " b(x): " << x << endl;
	//podpunkt c
	if (x > 2)
		cout << " c(x): " << 2 + x << endl;
	else if (x == 2)
		cout << " c(x): " << x << endl;
	else
		cout << " c(x): " << x - 4 << endl; */
	
/*	 //zad5
	float x, y, z;
	cout << " Wpisz pierwsza liczbe: ";
	cin >> x;
	cout << "\n Wpisz druga liczbe: ";
	cin >> y;
	cout << "\n Wpisz trzecia liczbe: ";
	cin >>z;
    if (x <= y && y <= z) 

		cout << "liczby posortowane: " << x << " " << y << " " << z << endl;

	if (x <= z && z <= y) 

		cout << "liczby posortowane: " << x << " " << z << " " << y << endl;

	if (y <= x && x <= z)

		cout << "liczby posortowane: " << y << " " << x << " " << z << endl;

	if (y <= z && z <= x) 

		cout << "liczby posortowane: " << y << " " << z << " " << x << endl;

	if (z <= x && x <= y) 

		cout << "liczby posortowane: " << z << " " << x << " " << y << endl;

	if (z <= y && y <= x) 
        
		cout << "liczby posortowane: " << z << " " << y << " " << x << endl; */

 /*  //zad6

int a, b;
cout << "Czy pada deszcz?(1-tak, 0-nie): ";
cin >> a;
cout << "Czy autobus jest na przystanku?(1-tak, 0-nie): ";
cin >> b;
if((a == 1) && (b == 1))
 cout << " Wez parasol, dostaniesz sie na uczelnie";
if((a == 1) && !(b == 1))
 cout << "Nie dostaniesz sie na uczelnie";
if (!(a == 1) && (b == 1))
cout << " Dostaniesz sie na uczelnie, Milego dnia i pieknej pogody"; */
 
  //zad7

int a, b;
cout << "Czy jest znizka na samochod?(1-tak, 0-nie): ";
cin >> a;
cout << "Czy otrzymales podwyzke?(1-tak, 0-nie): ";
cin >> b;
if (!(a == 1) || (b == 1))

cout << "Mozesz kupic samochcd , Znizki na samochod nie ma ";

if (!(a == 1) || !(b == 1))

cout << "Zakup samochod trzeba odlozyc na pozniej..., Znizki na samochod nie ma ";

if ((a == 1) || (b == 1))

cout << "Mozesz kupic samochod !";

return 0;

}