#pragma once
#include<iostream>
#include<string>
using namespace std;
/*
* 定义命名空间MyTestNameSpace
*/
namespace MyTestNameSpace 
{
	/*
	*打印整形数据
	*/
	void printInt(int i) 
	{
		cout << i << endl;
	}
	/*
	*打印String数据
	*/
	void printString(std::string str) 
	{
		cout <<str << endl;
	}
	/*
	*打印单个字符
	*/
	void printSperateLineWith(char c) 
	{
		for (int i = 0; i < 10; i++) 
		{
			cout << c;
		}
		cout << endl;
	}
	/*
	*打印单字字符
	*/
	void printChar(char c)
	{
		cout << c << endl;
	}
	/*
	* 父类
	*/
	class Father
	{
	public:
		int name = 39;
		/*
		*必须有虚函数，否则无法使用dynamic_cast
		*/
		virtual void  fun2() {};
	};

	/*
	* 子类：继承Father
	*/
	class Son :public Father 
   {
	public:
		int nickName = 7;
		/*
		*必须有虚函数，否则无法使用dynamic_cast
		*/
		virtual void  fun2() {};
	};

	class Other
	{
	public:
		float  color;
	};


}