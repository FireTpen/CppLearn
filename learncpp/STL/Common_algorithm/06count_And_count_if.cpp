#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>

using namespace std;

class Person
{
public:
    Person(string name,int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }

    bool operator==(const Person &p)
    {
        if(this->m_Age == p.m_Age)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    string m_Name;
    int m_Age;
};

class myCompare
{
public:
    bool operator()(Person &p)
    {
        return p.m_Age > 12;
    }
};

void test01()
{
    vector<Person> v;
    Person p1("张三",14);
    Person p2("李四",16);
    Person p3("王五",12);
    Person p4("赵六",12);
    Person p5("高七",12);

    Person p("诸葛亮",12);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    int ret = count(v.begin(),v.end(),p);
    cout << "count= " << ret << endl;

    int ret2 = count_if(v.begin(),v.end(),myCompare());
    cout << "count_if=" <<ret2 << endl;
    
}


int main()
{
    test01();
    return 0;
}