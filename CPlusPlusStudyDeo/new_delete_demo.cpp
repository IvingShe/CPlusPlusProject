//#include<iostream>
//#define TEST_ARRAY 
//using namespace std;
//
//int main() {
//	//��������
//#ifndef TEST_ARRAY
//	int* pInt = new int;
//	char* pChar = new char;
//	*pInt = 200;
//	*pChar = 'A';
//	cout << "*pInt =" << *pInt << endl;
//	cout << "*pChar =" << *pChar << endl;
//	cout << "pChar size =" << sizeof(pChar) << endl;
//	cout << "pInt size ="<<sizeof(pInt) << endl;
//	//ɾ������
//	delete pChar;
//	delete pInt;
//#else
//   cout << "long size =" <<sizeof(long) << endl;
//   cout << "float size =" <<sizeof(float) << endl;
//	cout << "double size =" << sizeof(double) << endl;
//	int* p = new int[5]; //��������
//	for (int i = 0; i < 5;i++) {
//		p[i] = i * i;
//	}
//	for (int  i = 0; i < 5; i++)
//	{
//		cout << p[i]<<endl;
//	}
//	delete[]  p;//ɾ�����飬ע�ⷽ���š�
//#endif // TEST_ARRAY
//	return 0;
//}