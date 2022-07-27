//#pragma once
//#include <iostream>
//#include "MyTestNameSpace.h"
////using namespace MyTestNameSpace; 
//namespace MyTestNameSpace{
//void testException() {
//	int index = 0;
//	while (index<10) {
//		if (index == 3) {
//			throw 'z';
//		}
//		if (index ==5) {
//			throw 5;
//		}
//		index++;
//	}
//}
//}

//int main() {
//	//abort();  //终止当前进程
//	MyTestNameSpace::printSperateLineWith('*');
//
//	try {
//		MyTestNameSpace::testException();
//	}
//	catch (int ie) {
//		MyTestNameSpace::printInt(ie);
//	}
//	catch (char ic) {
//		MyTestNameSpace::printChar(ic);
//	}
//	MyTestNameSpace::printSperateLineWith('*');
//
//	double iT = 20.555456;
//	int d1 = int(iT);
//	int d2 = (int)iT;
//	cout << d1 << endl;
//	MyTestNameSpace::printSperateLineWith('*');
//	cout << d2 << endl;
//}