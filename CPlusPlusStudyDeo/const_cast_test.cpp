#include "const_cast_test.h"
//#include "MyTestNameSpace.h";
//using namespace  MyTestNameSpace;
//
//int main() {
//	MyTestNameSpace::printSperateLineWith('*');//打印分隔符
//	const Son son;
//	MyTestNameSpace::printString("转换前的结果，son.name:");
//	MyTestNameSpace::printInt(son.name);
//
//	//son.name = 90;// 不行，不能修改；
//
//	/*
//	*错误:“无法从“const MyTestNameSpace::Son *”转换为“MyTestNameSpace::Son *”
//	*/
//    //Son* pS = &(son);
//	MyTestNameSpace::printString("********指针的转换**********");
//	Son* pS = const_cast<Son*>(&(son));
//	pS->name = 90;
//	MyTestNameSpace::printString("转换后的结果，son.name:");
//	MyTestNameSpace::printInt(son.name);
//
//	MyTestNameSpace::printString("转换后的结果，pS->name:");	
//	MyTestNameSpace::printInt(pS->name);
//
//	/*
//	* 引用的转换
//	*/
//	MyTestNameSpace::printString("********引用的转换**********");
//	MyTestNameSpace::printString("转换前的结果，son.nickName:");
//	MyTestNameSpace::printInt(son.nickName);
//
//	Son &son_backup = const_cast<Son&>(son);
//	son_backup.nickName = 100;
//
//	MyTestNameSpace::printString("转换后的结果，son.nickName:");
//	MyTestNameSpace::printInt(son.nickName);
//
//	MyTestNameSpace::printString("转换后的结果，son_backup.nickName");
//	MyTestNameSpace::printInt(son_backup.nickName);
//}
