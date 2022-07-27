#include<iostream>

using namespace std;

class Student 
{
public:
	Student() 
	{
		studentId = 1;
		age = 5;
		score = 98.50f;
	}	
	Student(int stuId, int stuAge, float stuScore=100.0f)
	{
		studentId = stuId;
		age = stuAge;
		score = stuScore;
	}
public:
	int studentId =21;
	int age;
	float score;
};

//int main()
//{
//	Student  stu(24,7,96.5f);//注意局部成员进行初始化；
//	Student *pStu= new Student(64,24,572.0f);
//	std::cout << stu.studentId << " " << stu.age << " " << stu.score << " " << std::endl;
//	std::cout << pStu->studentId << " "<<pStu->age << " "<<pStu->score<< " " << std::endl;
//	delete pStu; 
//	return 0;
//}