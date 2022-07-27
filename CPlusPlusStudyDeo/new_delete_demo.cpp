//#include<iostream>
//#define TEST_ARRAY 
//using namespace std;
//
//int main() {
//	//创建对象
//#ifndef TEST_ARRAY
//	int* pInt = new int;
//	char* pChar = new char;
//	*pInt = 200;
//	*pChar = 'A';
//	cout << "*pInt =" << *pInt << endl;
//	cout << "*pChar =" << *pChar << endl;
//	cout << "pChar size =" << sizeof(pChar) << endl;
//	cout << "pInt size ="<<sizeof(pInt) << endl;
//	//删除对象
//	delete pChar;
//	delete pInt;
//#else
//   cout << "long size =" <<sizeof(long) << endl;
//   cout << "float size =" <<sizeof(float) << endl;
//	cout << "double size =" << sizeof(double) << endl;
//	int* p = new int[5]; //申请数组
//	for (int i = 0; i < 5;i++) {
//		p[i] = i * i;
//	}
//	for (int  i = 0; i < 5; i++)
//	{
//		cout << p[i]<<endl;
//	}
//	delete[]  p;//删除数组，注意方括号。
//#endif // TEST_ARRAY
//	return 0;
//}