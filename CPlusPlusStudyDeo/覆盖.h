#pragma once
#include <iostream>
using namespace std;

class Person {
public:
	int age; 
	Person(){
		age = 74;
	}
	void fun() {
		cout << "Person fun" << endl;
	}
	void fun(int i) {
		cout << "Person fun with  a parameter" << endl;
	}
};

class Student :public Person {
public:
	int age;

	Student(){
		age = 21;
	}

	void fun() {
		cout << "Student fun" << endl;
	}

	void show() {	
		cout << Person::age << endl; //ͨ������::���������� �����ͬ������age.
		//cout << age << endl;  //���า���˸��������age��
	}
};

//int main()
//{
//	Student student;
//	//student.show();
//	student.fun();
//	cout<<"**���ø���ı����ǵķ���**" << endl;
//	student.Person::fun();
//	student.Person::fun(3);
//}