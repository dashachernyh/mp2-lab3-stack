#include "gtest.h"

#include "stack.h"

TEST(TStack, can_creat_stack_with_positiv_lenght)
{
	ASSERT_NO_THROW(TStack<int> st(5));
}

TEST(TStack, throw_than_create_stack_with_negativ_lenght)
{
	ASSERT_ANY_THROW(TStack<int> st(-5));
}

TEST(TStack, can_put_elem_)
{
	TStack<int> st(5);
	int el = 3;
	ASSERT_NO_THROW(st.Push(el));
	EXPECT_EQ(3, st.Top());
}
TEST(TStack, can_look_elem)
{
	TStack<int> st(5);
	int el = 3;
	st.Push(el);
	EXPECT_EQ(3,st.Top());
}

TEST(TStack, can_get_elem)
{
	TStack<int> st(5);
	int el = 3;
	EXPECT_EQ(3, st.Pop());
}
TEST(TStack, assert_true_stack_is_empty)
{
	TStack<int> st(5);
	EXPECT_EQ(1,st.IsEmpty());
}
TEST(TStack, assert_false_stack_is_full)
{
	TStack<int> st(5);
	EXPECT_EQ(0,st.IsFull());
}
TEST(TStack, assert_true_stack_is_full)
{
	TStack<int> st(5);
	for (int i = 0; i < 5; i++)
		st.Push(i);
	EXPECT_EQ(1,st.IsFull());
}
TEST(TStack, throw_then_look_elem_in_empty_stack)
{
	TStack<int> st(5);
	ASSERT_ANY_THROW(st.Top());
}
TEST(TStack, throw_then_get_elem_from_empty_stack)
{
	TStack<int> st(5);
	ASSERT_ANY_THROW(st.Pop());
}
TEST(TStack, throw_then_put_elem_in_full_stack)
{
	TStack<int> st(5);
	for (int i = 0; i < 5; i++)
		st.Push(i);
	int el = 1;
	ASSERT_ANY_THROW(st.Push(el));
}
TEST(TStack, can_clear_stack)
{
	TStack<int> st(5);
	for (int i = 0; i < 5; i++)
		st.Push(i);
	st.ClearSt();
	EXPECT_EQ(1, st.IsEmpty());
}
