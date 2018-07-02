// This program is used to demonstate call such function
// which uses template as a local variable
#include<stdio.h>

template <class T>
void fun(int no)
{
	T *temp;
	temp = new T[no];
}

int main()
{
	fun<int>(10);
	fun<char>(10);

	return 0;
}