#pragma warning(disable:4996)
#include<iostream>
#include"MyTestNameSpace.h"
using namespace std;
using namespace MyTestNameSpace;

//#define C_STRING_TEST 0;
int main()
{
	//char site[6] = { 'J', 'i', 'm', 'm', 'y'};
	//char site2[] = "Jimmy";

	
	/*std::cout << "site :" << site << std::endl;
	std::cout << "site2 :" << site2 << std::endl;
	std::cout << "site size=" << sizeof(site)<< std::endl;
	std::cout << "site2 size=" << sizeof(site2) << std::endl;*/

#ifdef  C_STRING_TEST
	char site[6] = { 'J', 'i', 'm', 'm', 'y' };//��ʽ1������C��ʽ���ַ���
	char str[] = "Hello,C String.";//��ʽ2������C��ʽ���ַ���
	char str1[6];
	char str2[15]; 
	//�ַ���copy��
	strcpy(str1, site);
	std::cout << "str1 :" << str1 << std::endl;

	//�ַ������ȣ�
	int strLengh=strlen(str);//��������ַ����ǲ������ַ���\0��
	std::cout << "strLengh :" << strLengh << std::endl;
	std::cout << "str size=" << sizeof(str) << std::endl;
	//�ַ������ӣ�
	strcat(str,site);
	std::cout << "str=" << str << std::endl;
	//�ַ����Ƚ�
	bool cmpResult =strcmp(str,site);
	std::cout << "cmpResult=" << cmpResult << std::endl;

#else

	string str1 = "Hello";
	string str2 = "C++ String"; 
	string str3 = str1 + str2;
	//cout << str3 << endl;
	MyTestNameSpace::printString(str3);
	std::cout << "str1.size()=" << str1.size() << std::endl;

#endif //  C_STRING
}
