#include"stack.h"
class TCalculator
{
	string expr, postfix;
	TStack<char> st_c;
	TStack<double>st_d;
	int Prior(char c); //функция
public:
	TCalculator() :st_c(50) {}
	void SetExpr(string _expr);
	string GetExpr();
	string GetPostfix();
	bool CheckBrackets();
	void ToPosfix();
	double Calc();
};