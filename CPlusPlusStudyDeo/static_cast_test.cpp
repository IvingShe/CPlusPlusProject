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
//	*static_cast ������ת��
//	*/
//	pF = static_cast<Father*>(pS);
//	MyTestNameSpace::printInt(pF->name);
//	/*
//	*static_cast������o����ת��
//	*/	
//	//��ʽת�������Գɹ���û�н�������ת�������֤
//	//��Ҫ����֤pF��ȫ��ȫ��ʹ�ã�
//	pF= (Father*)pO;   
//	//��ʽת��������ʱ����������ת��������˱��벻ͨ��
//	/*pF = static_cast<Father*>(pO);*/
//
//	Father* pF2=new Father;
//	Son* pS2 = NULL;
//	/*
//	*static_cast ������ת��
//	*/
//	pS2 = static_cast<Son*>(pF2);
//	MyTestNameSpace::printSperateLineWith('#');//��ӡ�ָ���
//	//�������е��������Ϊ�������ݣ��������ת�������⡣
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
