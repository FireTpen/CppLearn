#include <iostream>
#include <vector>
#include <functional>
#include <numeric>
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

class MyCompare
{
public:
    bool operator()(int v1)
    {
        return v1 > 5;
    }
};

class Greater20
{
public:
    bool operator()(Person &p)
    {
        return p.m_Age > 20;
    }
};

void test()
{
    //1.内置数据类型
    vector<int> v;
    for(int i = 0;i < 10;i++)
    {
        v.push_back(i);
    }

    vector<int>::iterator pos = find_if(v.begin(),v.end(),MyCompare());
    cout << (*pos) << endl;

    //2.自定义数据类型
    vector<Person> vp;

    Person p1("张三",14);
    Person p2("李四",16);
    Person p3("王五",22);
    Person p4("赵六",31);
    Person p5("高七",12);

    vp.push_back(p1);
    vp.push_back(p2);
    vp.push_back(p3);
    vp.push_back(p4);
    vp.push_back(p5);


    vector<Person>::iterator p_pos = find_if(vp.begin(),vp.end(),Greater20());
    cout << "姓名:" << p_pos->m_Name << " 年龄:" << p_pos->m_Age << endl;

}

int main()
{
    test();
    return 0;
}