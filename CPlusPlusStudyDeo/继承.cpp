//#include<iostream>
//using namespace std;
//class  Person{//���࣬����
//public:
//	void showName() {
//		std::cout << "showName" << std::endl;
//	}
//private:
//	int age;
//
//};
//
//class Student :public Person {  //����1��������1
//
//public:
//	void goToShool() {
//		std::cout << "goToShool" << std::endl;
//	}
//};
//
//class Worker :public Person {  //����2��������2
//
//public:
//	void goToWork() {
//		std::cout << "goToWork" << std::endl;
//	}
//};
//
//class Farmer:public Person {//����3��������3
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
//	stu.showName();//��������
//	stu.goToShool();
//	std::cout << "*************" << std::endl;
//	Farmer farmer;//��������
//	farmer.showName();
//	farmer.doSomething();
//	return 0;
//}