//This program is used to demonstate class template with two template variables

#include<iostream>

using namespace std;

template <class T1,class T2> 
class demo
{
	private:
		int size;
		T1 * ptr1;
		T2 * ptr2;
		int top;

	public:
		void push(T1);
};

template <class T1,class T2>void
demo<T1,T2>::push(T1 val)
{
	if(top<size)
		ptr1[++top]=val;
}

int main()
{
	demo<int,float>st1;
	demo<char,int>st2;

	st1.push(10); 
	st1.push(20);
	st1.push(30); 	
	st1.push(40);

	return 0;
}



















