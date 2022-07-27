#include<iostream>
class Person 
{
public:
	int age;

	void printInfor()
	{
		std::cout << "age=" << age << std::endl;
	}
};
//int main() 
//{
//	Person  person; 
//	person.age = 6;
//	person.printInfor();
//
//	Person* pPerson = new Person();
//	pPerson->age = 38;
//	pPerson->printInfor();
//	delete pPerson;
//	return 0;
//}