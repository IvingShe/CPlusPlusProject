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
//	*dynamic_cast ������ת�����ɹ�
//	*/
//	pF = dynamic_cast<Father*>(pS);
//	if (pF!=NULL) 
//	{
//		MyTestNameSpace::printInt(pF->name);
//	}
//	
//	/*
//	*dynamic_cast ������ת����ʧ��
//	������ָ��ָ���˻������
//	*/
//	Father* pF2 = new Father;
//	Son* pS2 = NULL;
//	pS2 = dynamic_cast<Son*>(pF2);
//	if (pS2==NULL)
//	{
//		printString("ָ��pF2����ת��ʧ��!!!");
//	}
//	else
//	{
//		printString("ָ��pF2����ת�ͳɹ��� ");
//	}
//	MyTestNameSpace::printSperateLineWith('*');//��ӡ�ָ���
//
//	/*
//	*dynamic_cast ������ת�����ɹ�
//	*������ָ��ָ�������������
//	*/
//	Father* pF3 = new Son;
//	Son* pS3 = NULL;
//	pS3 = dynamic_cast<Son*>(pF3);
//	if (pS3 == NULL)
//	{
//		printString("###ָ��pF3����ת��ʧ��!!!");
//	}
//	else
//	{
//		printString("###ָ��pF3����ת�ͳɹ��� ");
//	}
//}
