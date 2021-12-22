#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Person
{
public:
    Person(string name,int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }

    string m_Name;
    int m_Age;
};



void test01()
{
    //1.创建一个Person类型的vector容器
    vector<Person> v;

    //2.创建一些数据
    Person p1("a",1);
    Person p2("b",2);
    Person p3("c",3);
    Person p4("d",4);
    Person p5("e",5);

    //3.往容器中插入数据
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    //vector<数据类型>::iterator it;  创建出来的迭代器it是一个指针

    //4.遍历vector容器
    for(vector<Person>::iterator it = v.begin();it != v.end();it++) //这里的it是一个  一级指针
    {
        cout << "姓名: " << (*it).m_Name << "年龄: " << (*it).m_Age << endl;
    }

}

void test02()
{
    //1.创建一个Person类型的vector容器
    vector<Person*> v1;

    //2.创建一些数据
    Person p6("aa",1);
    Person p7("bb",2);
    Person p8("cc",3);
    Person p9("dd",4);
    Person p10("ee",5);

    //3.往容器中插入数据
    v1.push_back(&p6);
    v1.push_back(&p7);
    v1.push_back(&p8);
    v1.push_back(&p9);
    v1.push_back(&p10);

    //4.遍历vector容器
    for(vector<Person*>::iterator it = v1.begin();it != v1.end();it++)    //这里的 it 是一个 二级指针
    {
        cout << "姓名: " << (*it)->m_Name << "年龄: " << (*it)->m_Age << endl;
    }

}

int main()
{
    test01();
    test02();
    return 0;
}