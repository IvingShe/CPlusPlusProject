#include<iostream>
using namespace std;

void fun(int a=12,char c='c')//ȫ��ָ��Ĭ��ֵ
{
	cout << a << " " << c << endl;
}
//ָ�����ֲ���Ĭ��ֵ��δָĬ��ֵ�Ĳ���һ����Ҫλ�������
void fun2(int a ,char c='c', float f=123.123) {

	cout << a << " " << c << " " << f << endl;
}
//void fun3();//��������
////int main() 
////{
////	fun();
////	fun(65,'A');
////	fun(96);
////	fun('a');	
////	fun2(67);//û��ָ��Ĭ��ֵ �Ĳ��� ��һ����Ҫ��ֵ��
////	fun2(67,'B');
////	fun2(67, 'B',312.123);
////	fun3();
////	return 0;
////}
//void fun3() {
//	cout << "fun3" << endl;
//}