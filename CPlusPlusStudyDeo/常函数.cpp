//#include <iostream>
//using namespace std;
//class Student 
//{
//public:
//	void show()  const  //常函数
//	{
//		//stuId = 13;//不允许修改类的数据成员
//		cout << "#show# stuId=" << stuId <<endl;//可以使用类的数据成员		
//	}
//
//	void setId(int id) //普通函数
//	{
//		this->stuId = id;
//	}
//private:
//	int stuId  =24;
//};
//int main()
//{
//    const Student stu;//申明常对象
//	stu.show();//可以调用 常函数 ；
//	//stu.setId(64); //不可以调用 普通函数 
//
//	std::cout << "  " << std::endl;
//	return 0;
//}