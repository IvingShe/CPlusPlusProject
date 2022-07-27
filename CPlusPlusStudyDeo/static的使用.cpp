//#include<iostream>
//using  namespace std;
//
//class Student {
//
//	public:
//		static int sA;// static 不可以直接初始化，需要在类外初始化；
//		static const int sKId= 24;//const static  int可以直接初始化；
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
////static 数据成员类外初始化；
//int Student::sA =7;
//int Student::sObjectCount = 0;
//
//int main()
//{
//	Student stu;
//	stu.show();  //对象调用 static函数；
//	Student::show();//类调用 static函数；
//
//	//创建student数组；包含5个Student对象
//	Student stuArray[5];
//	Student::showObjecCount();
//
//	return 0;
//}