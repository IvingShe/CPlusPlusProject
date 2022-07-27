//#include <iostream>
//
//class Person {
//private :
//	int age;
//	std::string name;
//	
//protected:
//	void fun() 
//	{
//		std::cout << " fun "<< std::endl;
//	}
//public:
//	void outputInfor()
//	{
//		//std::cout << "name=" << this->name  << std::endl;
//		std::cout << "age=" << age << std::endl;
//	}
//
//	void setAge(int age) {
//		this->age = age;//类内访问private；
//	}
//};
//
//
//class OnePerson :Person {
//
//public:
//	void say() {
//		fun();//访问父类中的 protected对象
//	}
//
//};
//int main() 
//{
//	Person p;
//	p.setAge(7);//类外访问public ；
//	p.outputInfor();
//
//	OnePerson onePerson; 
//	onePerson.say();
//	return 0;
//}