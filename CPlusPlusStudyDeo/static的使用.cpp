//#include<iostream>
//using  namespace std;
//
//class Student {
//
//	public:
//		static int sA;// static ������ֱ�ӳ�ʼ������Ҫ�������ʼ����
//		static const int sKId= 24;//const static  int����ֱ�ӳ�ʼ����
//		static int sObjectCount;
//	public:
//		Student() 
//		{
//			sObjectCount++;
//		}
//
//		static void show() 
//		{
//			cout << sA << "  " << sKId << endl;
//		}
//		static void showObjecCount() 
//		{
//			cout << sObjectCount << endl;
//		}
//};
//
////static ���ݳ�Ա�����ʼ����
//int Student::sA =7;
//int Student::sObjectCount = 0;
//
//int main()
//{
//	Student stu;
//	stu.show();  //������� static������
//	Student::show();//����� static������
//
//	//����student���飻����5��Student����
//	Student stuArray[5];
//	Student::showObjecCount();
//
//	return 0;
//}