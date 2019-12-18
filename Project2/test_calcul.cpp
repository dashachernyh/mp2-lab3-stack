/*#include "gtest.h"
#include<string>
using namespace std;
#include "../Project1/calcul.h"
TEST(TCalculator, can_write_expretion)
{
	string s = "0";
	TCalculator c;
	ASSERT_NO_THROW(c.SetExpr(s));
}

TEST(TCalculator, can_read_expretion)
{
	string s = "0";
	TCalculator c;
	c.SetExpr(s);
	EXPECT_EQ(s,c.GetExpr());
}
TEST(TCalcul,assert_true_then_chek_brakets)
{
	TCalculator c;
	string ex = "2+(2+3)";
	c.SetExpr(ex);
	EXPECT_EQ(1, c.CheckBrackets());
}
TEST(TCalcul, assert_false_then_chek_brakets)
{
	TCalculator c;
	string ex = "2+(2+3))";
	c.SetExpr(ex);
	EXPECT_EQ(0, c.CheckBrackets());
}

/*TEST(TCalcul, can_get_postfix)
{
	TCalculator c;
	string st = "2-2";
	string st2="22-";
	c.SetExpr(st);
	//ASSERT_NO_THROW(c.ToPosfix);
	EXPECT_EQ(st2, c.GetPostfix());
}
TEST(TCalcul, can_calculate)
{
	TCalculator c;
	string st = "2-2*(3+4)";
	c.SetExpr(st);
	ASSERT_ANY_THROW(c.CheckBrackets());
	EXPECT_EQ(-12, c.Calc());
}*/