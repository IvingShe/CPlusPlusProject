#include <iostream>
//#include  "MyTestNameSpace.h"
using namespace std;
//using namespace MyTestNameSpace;
//�ӿ���
class Furit {

public:
	int size = 0;

	virtual void showName() = 0;

	virtual void setColor() = 0;
};

//������
class Apple :public Furit {

public:
	virtual void showSize() = 0;
	void showName() {		
		std::cout << "Apple" << endl;
	}
};


//int main()
//{
//	Furit* pFurit = new Apple();
//	pFurit->showName();
//	delete pFurit;
//}