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
		cout << Person::age << endl; //通过父类::变量名调用 父类的同名属性age.
		//cout << age << endl;  //子类覆盖了父类的属性age；
	}
};

//int main()
//{
//	Student student;
//	//student.show();
//	student.fun();
//	cout<<"**调用父类的被覆盖的方法**" << endl;
//	student.Person::fun();
//	student.Person::fun(3);
//}