//#include<iostream>
//using namespace std;
//class Student {
//
//public:
//	Student()
//	{
//		cout << " 构造函数" << endl;
//		mAge = 6;
//	}
//	~Student() {
//		cout << " 析构函数" << endl;
//	}
//public :
//	int mAge;
//};
//int main() {
//	//new 对象 调用构造函数
//	Student* pStudent = new Student;
//	cout << " pStudent ->mAge:" << pStudent->mAge << endl;
//	cout << "******new end******" << endl;
//
//	//malloc对象不调用 构造函数
//	Student* pStu = (Student*)malloc(sizeof(Student));
//	cout << " pStu ->mAge:" << pStu ->mAge << endl;
//	cout << "******malloc end******" << endl;
//	
//	//delete 对象走析构函数
//	delete pStu;
//	cout << "******delete end*****" << endl;
//
//	//free 对象不走析构函数
//	free(pStudent);
//	cout << "******free end******" << endl;
//
//	return 0;
//}