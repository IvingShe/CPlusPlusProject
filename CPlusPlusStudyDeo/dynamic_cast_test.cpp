#include "dynamic_cast_test.h"
//#include "MyTestNameSpace.h";
//using namespace  MyTestNameSpace;
//
//
//int main() 
//{
//	Father* pF;
//	Son* pS = new Son;
//	Other* pO = new Other;
//	/*
//	*dynamic_cast 的上型转换：成功
//	*/
//	pF = dynamic_cast<Father*>(pS);
//	if (pF!=NULL) 
//	{
//		MyTestNameSpace::printInt(pF->name);
//	}
//	
//	/*
//	*dynamic_cast 的下型转换：失败
//	（基类指针指向了基类对象）
//	*/
//	Father* pF2 = new Father;
//	Son* pS2 = NULL;
//	pS2 = dynamic_cast<Son*>(pF2);
//	if (pS2==NULL)
//	{
//		printString("指针pF2向下转型失败!!!");
//	}
//	else
//	{
//		printString("指针pF2向下转型成功。 ");
//	}
//	MyTestNameSpace::printSperateLineWith('*');//打印分隔符
//
//	/*
//	*dynamic_cast 的下型转换：成功
//	*（基类指针指向了派生类对象）
//	*/
//	Father* pF3 = new Son;
//	Son* pS3 = NULL;
//	pS3 = dynamic_cast<Son*>(pF3);
//	if (pS3 == NULL)
//	{
//		printString("###指针pF3向下转型失败!!!");
//	}
//	else
//	{
//		printString("###指针pF3向下转型成功。 ");
//	}
//}
