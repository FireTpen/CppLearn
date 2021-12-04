#include <iostream>

using namespace std;

//案例1.创建一个学生的类，属性有学生的姓名和学号，并且可以对其赋值，可以显示学生的姓名和学号
class Student
{
public:
    string name;
    string s_number;

    void display_Attribute()
    {
        cout << "学生姓名:" << name << endl;
        cout << "学生学号:" << s_number << endl;
    }
};




int main()
{
    Student c1[2] = {{"张三","01"},{"李四","02"}};

    int i;
    for(i = 0;i < 2;i++)
    {
        c1[i].display_Attribute();
    }
    

    return 0;
}