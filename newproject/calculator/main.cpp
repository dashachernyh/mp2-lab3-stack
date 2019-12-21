#include<iostream>
using namespace std;
#include"calcul.h"
#include<conio.h>
#include<string>
int main()
{

	TCalculator c;
	string a,b;
	double m;
	cin>> a;
	c.SetExpr(a);
	cout << a << endl;
	c.ToPosfix();
	b = c.GetPostfix();
	cout << b << endl;
	m = c.Calc();
	cout << m << endl;
	_getch();
}