#include"stack-list.h"
class TCalculator
{
	string expr, postfix;
	TStack<char> st_c;
	TStack<double>st_d;
	int Prior(char c); //функция
public:
	TCalculator() :st_c() {}
	void SetExpr(string _expr);
	string GetExpr();
	string GetPostfix();
	bool CheckBrackets();
	void ToPosfix();
	double Calc();
};