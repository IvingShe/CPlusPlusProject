//#include<iostream>
//class Student {
//public:
//	//构造函数后（冒号后），初始化数据成员（各数据成员使用逗号分隔）
//	Student() :age(7), score(98.00f), studentId(24)
//	{
//	}
//	//参数初始化数据成员
//	Student(int a,float sc, int id):age(a),score(sc),studentId(id) 
//	{
//	}
//
//	void showInfor() 
//	{
//		std::cout << age << " " << score << std::endl;	
//	}
//
//private:
//	int age; 
//	float score;
//	int studentId;
//	std::string name;
//	const int kD=12;//const 常量必须初始化
//};
//
//int main()
//{
//	Student  stud;
//	stud.showInfor();
//
//	Student  stud2(25, 572.0f, 64);
//	stud2.showInfor();
//	return 0;
//}