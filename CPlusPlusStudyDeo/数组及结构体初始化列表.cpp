//#include <iostream>
//
//struct StuInfor
//{
//	int id;
//	float score;
//};
//
//class Student {
//public:
//	//构造函数参数  初始化 类的结构体数据成员
//	Student(StuInfor info, int age =7):mStuInfo(info), mAge(age){
//		//数组成员初始化
//		memset(mLovedClolors, 0, 5*sizeof(int));
//	}
//
//	 void showInfor() {
//		 std::cout << mStuInfo.id << " " << mStuInfo.score << " " << mAge << std::endl;
//		 for (int i = 0;i < 5;i++) 
//		 {
//			 std::cout << mLovedClolors[i] << std::endl;
//		 }
//	}
//
//private:
//	StuInfor mStuInfo;
//	int  mAge;
//	int mLovedClolors[5];
//};
//
//int main()
//{
//	StuInfor  stuInfor = {24, 98.0f};//结构体初始化
//	StuInfor  stu1 = stuInfor;
//	std::cout << stu1.id << " " << stu1.score << std::endl;
//
//	Student stu(stuInfor);//类的结构体数据成员初始化
//	stu.showInfor();
//
//	return 0;
//}