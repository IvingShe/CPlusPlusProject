#pragma once
#include<iostream>
#include<string>
using namespace std;
/*
* ���������ռ�MyTestNameSpace
*/
namespace MyTestNameSpace 
{
	/*
	*��ӡ��������
	*/
	void printInt(int i) 
	{
		cout << i << endl;
	}
	/*
	*��ӡString����
	*/
	void printString(std::string str) 
	{
		cout <<str << endl;
	}
	/*
	*��ӡ�����ַ�
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
	*��ӡ�����ַ�
	*/
	void printChar(char c)
	{
		cout << c << endl;
	}
	/*
	* ����
	*/
	class Father
	{
	public:
		int name = 39;
		/*
		*�������麯���������޷�ʹ��dynamic_cast
		*/
		virtual void  fun2() {};
	};

	/*
	* ���ࣺ�̳�Father
	*/
	class Son :public Father 
   {
	public:
		int nickName = 7;
		/*
		*�������麯���������޷�ʹ��dynamic_cast
		*/
		virtual void  fun2() {};
	};

	class Other
	{
	public:
		float  color;
	};


}