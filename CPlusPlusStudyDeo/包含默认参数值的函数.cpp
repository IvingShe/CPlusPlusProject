#include<iostream>
using namespace std;

void fun(int a=12,char c='c')//全部指定默认值
{
	cout << a << " " << c << endl;
}
//指定部分参数默认值，未指默认值的参数一定需要位于最左边
void fun2(int a ,char c='c', float f=123.123) {

	cout << a << " " << c << " " << f << endl;
}
//void fun3();//函数申明
////int main() 
////{
////	fun();
////	fun(65,'A');
////	fun(96);
////	fun('a');	
////	fun2(67);//没有指定默认值 的参数 ，一定需要传值。
////	fun2(67,'B');
////	fun2(67, 'B',312.123);
////	fun3();
////	return 0;
////}
//void fun3() {
//	cout << "fun3" << endl;
//}