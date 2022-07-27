//#include <iostream>
//using namespace std;//方式1使用
//
//namespace  demospace
//{
//	void fun() {
//		cout << "fun is from demospace"<<endl;
//	}
//}
//
//namespace  demospace_copy
//{
//	void fun() {
//		cout << "fun is from demospace copy" << endl;
//	}
//}
//
//int main() {
//	std::cout << "main from std::cout" << endl;;
//	using namespace demospace_copy;//方式1使用
//	fun();
//	demospace::fun();//方式2使用
//}