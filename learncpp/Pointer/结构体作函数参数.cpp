//#include <iostream>
//#include <string>
//
//using namespace std;
//
//struct Student {
//	string name;
//	int age;
//};
//
//void display(struct Student stu)
//{
//	cout << "  姓名:" << stu.name << "\n  年龄:" << stu.age << endl;
//}
//
//void change_info(struct Student* stu)
//{
//	stu->name = "王波";
//	stu->age = 24;
//}
//
//int main()
//{
//	struct Student s1 = { "小明",18 };
//	//值传递
//	display(s1);
//	//地址传递
//	change_info(&s1);
//	display(s1);
//
//	system("pause");
//	return 0;
//}