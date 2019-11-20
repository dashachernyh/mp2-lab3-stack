#pragma once
#include<iostream>
using namespace std;
#include"stack.h"
#include<string>
template<class T>
class TCalculator
{
	string expr, postfix;
	TStack<char> st_c,st_d;
	int Prior(char c); //функция
	public::
		TCalculator() :st_c(50) {}
	void SetExpr(string _expr);
	string GetExpr();
	bool CheckBrackets() const;
	void ToPosfix();
	int Prior(char c);
	double Calc();
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
bool TCalculator<T>::CheckBrackets()const
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
template<class T>
int TCalculator<T>::Prior(char c)
{
	if (c == '(') return 0;
	if (c == '+' || c == '-') return 1;
	if (c == '*' || c == '/') return 2;
	if (c == '^') return 3;
}
template<class T>
void TCalculator<T>::ToPosfix()
{
	string str = "(";
	str += expr;
	str += ")";
	st_c.ClearSt();
	postfix = " ";
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '(') st_c.Push();
		if (str[i] >= '0' || str[i] <= '9' || str[i] == '.') postfix += str[i];
		if (str[i] == ')')
		{
			char tmp = st_c.Pop();
			while (tmp != '(')
			{
				postfix += tmp;
				tmp = st_c.Pop();
			}
		}
		if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
		{
			posfix += " ";
			char tmp = st_c.Pop();
			while (Prior(str[i]) <= Prior(tmp))
			{
				postfix += tmp;
				tmp = st_c.Pop();
			}

			st_c.Push(tmp);
			st_c.Push(str[i]);
		}
	}
}
template<class T>
double Calc()
{
	st_d.Clear
}