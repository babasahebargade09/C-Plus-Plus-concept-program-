//This program is used to demonstate class template & its inheritance

#include<iostream>

using namespace std;

template <class T1> 
class demo
{
	private:
		int size;
		T1 * ptr1;
		int top;

	public:
		void push(T1);
};

template <class T1>void
demo<T1>::push(T1 val)
{
	if(top<size)
		ptr1[++top]=val;
}

// Whlie deriving a class from template class we have to use template argument
template <class T>
class derived :public demo<T>
{

};

int main()
{
	demo<int>st1;
	demo<char>st2;

	st1.push(10); 
	st1.push(20);
	st1.push(30); 	
	st1.push(40);

	return 0;
}
