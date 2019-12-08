#include "gtest.h"
#include<string>
#include "calcul.h"
TEST(TCalculator, can_write_expretion)
{
	string s = "0";
	TCalculator<int> c;
	ASSERT_NO_THROW(c.SetExpr(s));
}

TEST(TCalculator, can_read_expretion)
{
	string s = "0";
	TCalculator<int> c;
	c.SetExpr(s);
	EXPECT_EQ(0,c.GetExpr());
}
TEST(TCalcul,assert_true_then_chek_brakets)
{
	TCalculator<int> c;
	string ex = "2+(2+3)";
	c.SetExpr(ex);
	EXPECT_EQ(1, c.CheckBrackets());
}
TEST(TCalcul, assert_false_then_chek_brakets)
{
	TCalculator<int> c;
	string ex = "2+(2+3))";
	c.SetExpr(ex);
	EXPECT_EQ(0, c.CheckBrackets());
}

TEST(TCalcul, can_get_postfix)
{
	TCalculator<int> c;
	string st = "2-2";
	c.SetExpr(st);
	ASSERT_NO_THROW(c.ToPosfix);
	EXPECT_EQ('22-', c.GetPostfix());
}
TEST(TCalcul, can_calculate)
{
	TCalculator<int> c;
	string st = "2-2*(3+4)";
	c.SetExpr(st);
	ASSERT_ANY_THROW(c.CheckBrackets());
	EXPECT_EQ(-12, c.Calc());
}