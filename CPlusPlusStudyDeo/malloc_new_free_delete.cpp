//#include<iostream>
//using namespace std;
//class Student {
//
//public:
//	Student()
//	{
//		cout << " ���캯��" << endl;
//		mAge = 6;
//	}
//	~Student() {
//		cout << " ��������" << endl;
//	}
//public :
//	int mAge;
//};
//int main() {
//	//new ���� ���ù��캯��
//	Student* pStudent = new Student;
//	cout << " pStudent ->mAge:" << pStudent->mAge << endl;
//	cout << "******new end******" << endl;
//
//	//malloc���󲻵��� ���캯��
//	Student* pStu = (Student*)malloc(sizeof(Student));
//	cout << " pStu ->mAge:" << pStu ->mAge << endl;
//	cout << "******malloc end******" << endl;
//	
//	//delete ��������������
//	delete pStu;
//	cout << "******delete end*****" << endl;
//
//	//free ��������������
//	free(pStudent);
//	cout << "******free end******" << endl;
//
//	return 0;
//}