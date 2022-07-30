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
	char site[6] = { 'J', 'i', 'm', 'm', 'y' };//方式1：构建C格式的字符串
	char str[] = "Hello,C String.";//方式2：构建C格式的字符串
	char str1[6];
	char str2[15]; 
	//字符串copy；
	strcpy(str1, site);
	std::cout << "str1 :" << str1 << std::endl;

	//字符串长度；
	int strLengh=strlen(str);//这个方法字符串是不包含字符后‘\0’
	std::cout << "strLengh :" << strLengh << std::endl;
	std::cout << "str size=" << sizeof(str) << std::endl;
	//字符串续接；
	strcat(str,site);
	std::cout << "str=" << str << std::endl;
	//字符串比较
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
