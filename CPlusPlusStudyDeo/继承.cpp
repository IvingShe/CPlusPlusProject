//#include<iostream>
//using namespace std;
//class  Person{//父类，基类
//public:
//	void showName() {
//		std::cout << "showName" << std::endl;
//	}
//private:
//	int age;
//
//};
//
//class Student :public Person {  //子类1，派生类1
//
//public:
//	void goToShool() {
//		std::cout << "goToShool" << std::endl;
//	}
//};
//
//class Worker :public Person {  //子类2，派生类2
//
//public:
//	void goToWork() {
//		std::cout << "goToWork" << std::endl;
//	}
//};
//
//class Farmer:public Person {//子类3，派生类3
//
//public:
//	void doSomething() {
//		std::cout << "doSomething" << std::endl;
//	}
//
//};
//
//int main()
//{
//	Student stu;
//	stu.showName();//公共方法
//	stu.goToShool();
//	std::cout << "*************" << std::endl;
//	Farmer farmer;//公共方法
//	farmer.showName();
//	farmer.doSomething();
//	return 0;
//}