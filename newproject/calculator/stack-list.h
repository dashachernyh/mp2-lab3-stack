#pragma once
template<class T>
struct TNode
{
	T val;
	TNode *pNext;
};
template<class T>
class TStack
{
	TNode<T> *pFirst;
public:
	TStack();
	TStack(const TStack &st);
	TStack<T>& operator =(const TStack<T> &st);
	void ClearSt();
	void Push(T el);
	T Top();
	T Pop();
	bool IsFull();
	bool IsEmpty();
};
template<class T>
TStack<T>::TStack<T>()
{
	pFirst = NULL;
}
template<class T>
TStack<T>::TStack<T>(const TStack<T> &st)
{
	TNode<T> *p = st.pFirst;
	if (p == NULL) pFirst = p;
	while (p != NULL)
	{
		Push(p->val);
		p = p->pNext;
	}
	delete p;
}
template<class T>
TStack<T>& TStack<T>::operator =(const TStack<T> &st)
{
	TStack<T> rez;
	TNode<T> *p = st.pFirst;
	if (p == NULL) rez.pFirst = p;
	while (p != NULL)
	{
		rez.Push(p->val);
		p = p->pNext;
	}
	 delete p;
	 return rez;
}

template<class T>
void TStack<T>::Push(T el)
{
	TNode<T> *p;
	p = new TNode<T>;
	p->val = el;
	p->pNext = pFirst;
	pFirst = p;
}
template<class T>
T TStack<T>::Top()
{
	if (pFirst == NULL) throw"stack is emty";
	return pFirst->val;
}
template<class T>
T TStack<T>::Pop()
{
	if (pFirst == NULL) throw "can not get elem";
	T val1 = pFirst->val;
	TNode<T> *p = pFirst;
	pFirst = pFirst->pNext;
	delete p;
	return val1;
}
template<class T>
bool TStack<T>::IsFull()
{
	TNode<T> *p;
	p = new TNode<T>;
	if (p == NULL) return true;
	else
	{
		delete p;
		return false;
	}
}
template<class T>
void TStack<T>::ClearSt()
{
	TNode<T> *p;
	p = pFirst;
	while (pFirst != NULL)
	{
		p = pFirst -> pNext;
		delete pFirst;
		pFirst = p;
	}
}
template<class T>
bool TStack<T>::IsEmpty()
{
	if (pFirst == NULL) return true;
	else return false;
}