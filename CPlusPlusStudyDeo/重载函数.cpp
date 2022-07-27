#include<iostream>

void fun(int a ,int b) 
{
	std::cout<<"1:" << a  <<  b <<std::endl;
}

void fun(int a, float  b) 
{
	std::cout << "2:" << a << b << std::endl;
}

void fun(char c)
{
	std::cout << "3:" << c << std::endl;
}
//
//int main() 
//{
//	fun(1,2);
//	fun(1, 2.123f);
//	fun('A');
//	return 0;
//}