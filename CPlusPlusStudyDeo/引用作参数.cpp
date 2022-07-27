#include<iostream>
using namespace std;
/*
引用作参数
*/
void fun(int&  arg) {
	cout << "#fun # arg:" << arg << endl;
	cout << "#fun # arg address:" << &arg << endl;
}
/*
*普通参数 
*/
void fun2(int arg) {
	cout << "#fun2 # arg:" << arg << endl;
	cout << "#fun2 # arg address:" << &arg << endl;
}
//int main() {
//	int original = 2123;
//	cout << "original :" << original << endl;
//	cout << "original address:" << &original << endl;
//	fun(original);
//	fun2(original);
//	return 0;
//}