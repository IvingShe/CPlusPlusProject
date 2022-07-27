#include <iostream>
using namespace std;
class Animal {
public:
	int age = 3;
	void walk() {
		cout << "Animal walk" << endl;
	}	
};

class Bird:virtual public Animal {
public:
	void fly() {
		cout << "Bird fly" << endl;
	}
};
class LandAnimal :virtual public Animal {
public:	
	void run() {
		cout << "LandAnimal run" << endl;
	}
};
class MarineAnimal:virtual public Animal {
public:
	
	void swim() {
		cout << "MarineAnimal swim" << endl;
	}
};
class Swan :public Bird,public LandAnimal,public MarineAnimal {
	
};
//int main() {
//	Swan  swan;
//	swan.age;
//	swan.walk();
//}