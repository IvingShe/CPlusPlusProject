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
//	//���캯������  ��ʼ�� ��Ľṹ�����ݳ�Ա
//	Student(StuInfor info, int age =7):mStuInfo(info), mAge(age){
//		//�����Ա��ʼ��
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
//	StuInfor  stuInfor = {24, 98.0f};//�ṹ���ʼ��
//	StuInfor  stu1 = stuInfor;
//	std::cout << stu1.id << " " << stu1.score << std::endl;
//
//	Student stu(stuInfor);//��Ľṹ�����ݳ�Ա��ʼ��
//	stu.showInfor();
//
//	return 0;
//}