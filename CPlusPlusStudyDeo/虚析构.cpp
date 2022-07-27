//#include<iostream>
//#include "MyTestNameSpace.h"
//using namespace std;
//using namespace MyTestNameSpace;
//
//class Person {
//public:	
//	virtual ~Person()   //虚析构函数
//	{
//		string str = "~Person";	
//		printString(str);
//	}
//};
//
//class Chlid :public Person{
//public:
//	virtual ~Chlid()
//	{
//		string str = "~Chlid";
//		printString(str);
//	}
//};
//
//class Animal {
//public:
//	~Animal()   //普通析构函数
//	{
//		string str = "~Animal";
//		printString(str);
//	}
//
//};
//class Dog:public Animal {
//public:
//	~Dog()   //普通析构函数
//	{
//		string str = "~Dog";
//		printString(str);
//	}
//
//};

//int main() {
//	Person* p = new Chlid();
//	delete p;
//	printString("************");
//	Animal* pAnimal = new Dog();
//	delete pAnimal;
//}