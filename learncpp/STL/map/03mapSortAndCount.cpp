#include <iostream>
#include <string>
#include <map>

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

class MapCompare
{
public:
    bool operator()(int v1,int v2)
    {
        //降序
        return v1 > v2;
    }

};

void printMapPerson(map<int,Person,MapCompare> &m)
{
    for(map<int,Person,MapCompare>::const_iterator mit = m.begin();mit != m.end();mit++)
    {
        cout << "编号:" << mit->first << "  姓名:" << mit->second.m_Name << "  年龄:" << mit->second.m_Age << endl;
    }
}

void test()
{
    //1.创建容器
    map<int,Person,MapCompare> m;

    //2.创建类对象
    Person p1("可莉",12);
    Person p2("达达利亚",21);
    Person p3("雷神",20);
    Person p4("优菈",18);
    Person p5("甘雨",16);
    Person p6("申鹤",24);

    //3.插入数据
    m.insert(make_pair(1,p1));
    m.insert(pair<int,Person>(2,p2));
    pair<int,Person> pa = make_pair(3,p3);
    m.insert(pair<int,Person>(4,p4));
    m.insert(pair<int,Person>(5,p5));
    m.insert(pair<int,Person>(6,p6));

    //4.打印
    printMapPerson(m);
}

int main()
{
    test();
    return 0;
}