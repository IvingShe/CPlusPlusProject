#include "Ðéº¯Êý.h"
#include <iostream>
using namespace std;

class Person {

public:
	void show() {
		cout << "Person show" << endl;
	}
	virtual void showWithVirtual() {
		cout << "Person showWithVirtual" << endl;
	}

};


class Child :public Person {

public:
	void show() {
		cout << "Child show" << endl;
	}
	virtual void showWithVirtual() {
		cout << "Child showWithVirtual" << endl;
	}

};



//int main()
//{
//	Person* pPerson = new Child; 
//	pPerson->show();
//
//	pPerson->showWithVirtual();
//
//}