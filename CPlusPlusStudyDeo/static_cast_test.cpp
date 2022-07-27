#include "static_cast_test.h"
//#include "MyTestNameSpace.h";

//class Father {
//public:
//	int name=39;
//};
//
//class Other {
//public:
//	float  color;
//};
//
//class Son :public Father {
//public:
//	int nickName=7;
//};

//int main() {
//	Father* pF;
//	Son* pS=new Son;
//	Other* pO=new Other;
//	/*
//	*static_cast 的上型转换
//	*/
//	pF = static_cast<Father*>(pS);
//	MyTestNameSpace::printInt(pF->name);
//	/*
//	*static_cast的其他o类型转换
//	*/	
//	//旧式转换，可以成功，没有进行类型转换检测验证
//	//需要程序保证pF被全理安全的使用；
//	pF= (Father*)pO;   
//	//新式转换，编译时进行了类型转换处理，因此编译不通过
//	/*pF = static_cast<Father*>(pO);*/
//
//	Father* pF2=new Father;
//	Son* pS2 = NULL;
//	/*
//	*static_cast 的下型转换
//	*/
//	pS2 = static_cast<Son*>(pF2);
//	MyTestNameSpace::printSperateLineWith('#');//打印分隔符
//	//可以运行但输出内容为错误内容，因此向上转型有问题。
//	MyTestNameSpace::printInt(pS2->nickName);
//
//	//delete pS;
//	//pS = NULL;
//	//delete pO;
//	////delete pF;
//	//MyTestNameSpace::printSperateLineWith('*');
//	//const Father* pKFather = new Father();
//	//pF = const_cast<Father*>(pKFather);
//	////pS = const_cast<Son*>(pKFather);
//	//MyTestNameSpace::printInt(pKFather->name);
//	//delete pKFather;
//}
