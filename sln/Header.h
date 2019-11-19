#pragma once
#include<iostream>
using namespace std;
#include"stack.h"
#include<string>
template<class T>
class TCalculator
{
	string expr, postfix;
	TStack<char> st_c;
	int Prior(char c); //функция
	public::
		TCalculator():st_c(50) {}
	void SetExpr(string _expr);
	string GetExpr();
	bool Check_exp() const;
	void ToPosfix();
};
template<class T>
void TCalculator<T>::SetExpr(string _expr)
{
	expr = _expr;
}
template<class T>
string TCalculator<T>::GetExpr()
{
	return expr;
}
template<class T>
bool TCalculator<T>::Check_exp()const
{
	st_c.ClearSt();
	for (int i = 0; i < expr.size(); i++)
	{
		if (expr[i] == '(')
			st_c.Push('(');
		if (expr[i] == ')')
		{
			if (st_c.IsEmpty()) return false;
			else st_c.Pop();
		}
	}
	if (st_c.IsEmpty()) return true;
	else return false;
}