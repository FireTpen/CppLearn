#include <iostream>
#include <string>
#include <list>

using namespace std;

class Person
{
public:
    Person(string name,int age,int height)
    {
        this->m_Name = name;
        this->m_Age = age;
        this->m_Height = height;
    }

    string m_Name;  //姓名
    int m_Age;      //年龄
    int m_Height;   //身高
};

void printList(list<Person> &L)
{
    for(list<Person>::const_iterator it = L.begin();it != L.end();it++)
    {
        cout << "姓名:" << it->m_Name << "  年龄:" << it->m_Age << "  身高:" << it->m_Height << endl;
    }

}

bool compareList(Person &p1,Person &p2)
{
    if(p1.m_Age == p2.m_Age)
    {
        return (p1.m_Height > p2.m_Height);
    }
    else
    {
        return (p1.m_Age < p2.m_Age);
    }
}

void test()
{
    //1.创建list容器
    list<Person> L;
    //2.创建Person对象
    Person p1("刘备",35,170);
    Person p2("张飞",35,167);
    Person p3("赵云",21,183);
    Person p4("曹操",38,165);
    Person p5("关羽",35,200);
    Person p6("黄忠",18,171);

    //3.插入容器
    L.push_back(p1);
    L.push_back(p2);
    L.push_back(p3);
    L.push_back(p4);
    L.push_back(p5);
    L.push_back(p6);

    //排序前
    printList(L);
    cout << "-------------------------------------------" << endl;
    //排序后
    L.sort(compareList);
    printList(L);

}

int main()
{
    test();
    return 0;
}