//This program is used to demonstate abstract class template

#include<iostream>

using namespace std;

template <class T1> 
class demo
{
	public:
		int size;
		T1 * ptr1;
		int top;

	public:
		virtual void push(T1) = 0;
};


// Whlie deriving a class from template class we have to use template argument
template <class T1>
class derived :public demo<T1>
{
public :
			void push(T1);
};

template <class T1>void
derived<T1>::push(T1 val)
{
	if(top<size)
		ptr1[++top]=val;
}

int main()
{
	derived<int>st1;
	derived<char>st2;

	st1.push(10); 
	st1.push(20);
	st1.push(30); 	
	st1.push(40);

	return 0;
}
