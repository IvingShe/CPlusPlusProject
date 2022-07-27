#include<iostream>
using namespace std;
class Student {

public:
	Student( int age)
	{	
		this->age = age;
		this->show();
	}
	void show() {
		cout << " age=" << age <<endl;
	}
public :
	int age;

};
//int main() {
//	Student st = Student(6);
//	//st.show();
//	return 0;
//}