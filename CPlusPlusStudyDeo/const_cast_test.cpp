#include "const_cast_test.h"
//#include "MyTestNameSpace.h";
//using namespace  MyTestNameSpace;
//
//int main() {
//	MyTestNameSpace::printSperateLineWith('*');//��ӡ�ָ���
//	const Son son;
//	MyTestNameSpace::printString("ת��ǰ�Ľ����son.name:");
//	MyTestNameSpace::printInt(son.name);
//
//	//son.name = 90;// ���У������޸ģ�
//
//	/*
//	*����:���޷��ӡ�const MyTestNameSpace::Son *��ת��Ϊ��MyTestNameSpace::Son *��
//	*/
//    //Son* pS = &(son);
//	MyTestNameSpace::printString("********ָ���ת��**********");
//	Son* pS = const_cast<Son*>(&(son));
//	pS->name = 90;
//	MyTestNameSpace::printString("ת����Ľ����son.name:");
//	MyTestNameSpace::printInt(son.name);
//
//	MyTestNameSpace::printString("ת����Ľ����pS->name:");	
//	MyTestNameSpace::printInt(pS->name);
//
//	/*
//	* ���õ�ת��
//	*/
//	MyTestNameSpace::printString("********���õ�ת��**********");
//	MyTestNameSpace::printString("ת��ǰ�Ľ����son.nickName:");
//	MyTestNameSpace::printInt(son.nickName);
//
//	Son &son_backup = const_cast<Son&>(son);
//	son_backup.nickName = 100;
//
//	MyTestNameSpace::printString("ת����Ľ����son.nickName:");
//	MyTestNameSpace::printInt(son.nickName);
//
//	MyTestNameSpace::printString("ת����Ľ����son_backup.nickName");
//	MyTestNameSpace::printInt(son_backup.nickName);
//}
