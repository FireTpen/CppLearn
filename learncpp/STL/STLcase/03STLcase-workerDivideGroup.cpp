#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <ctime>
using namespace std;

/*
分部门打印也可以用 find()查找部门对应的key值， 并赋值给 迭代器pos,每打印一个pos++就可以获取该部门所有员工的信息
*/


//员工类
class Worker
{
public:
    //构造函数
    Worker(string name,int age,int salary)
    {
        this->m_Name = name;
        this->m_Age = age;
        this->m_Salary = salary;
    }

    string m_Name;  //姓名
    int m_Age;      //年龄
    int m_Salary;   //工资
};

//创建10名员工
void staff_Recruitment(vector<Worker> &v)
{
    string numSeed = "ABCDEFGHIJ";
    
    
    for(int i = 0;i < numSeed.size();i++)
    {
        int age = rand() % 19 + 18;
        int salary = rand() % 6001 + 6000;
        string name = "姓名:";
        name += numSeed[i];
        Worker p(name,age,salary);
        v.push_back(p);
    }
}
//打印员工信息
void printVector(vector<Worker> & v)
{
    for(vector<Worker>::const_iterator vit = v.begin();vit != v.end();vit++)
    {
        cout << vit->m_Name << "  年龄:" << vit->m_Age << "  工资:" << vit->m_Salary << endl;
    }
}

//将员工按部门编号插入multimap容器中
void employeeGroups(multimap<int,Worker> &m,vector<Worker> &v)
{   
    for(vector<Worker>::const_iterator vit = v.begin();vit != v.end();vit++)
    {
        int key = rand() % 3 + 1;
        m.insert(pair<int,Worker>(key,(*vit)));
    }
}

//打印multimap容器
void printMultimap(multimap<int,Worker> &m)
{   
    cout << "------------------------------------" << endl;
    cout << "策划部：" << endl;
    for(multimap<int,Worker>::const_iterator mit = m.begin();mit != m.end();mit++)
    {
        if(mit->first == 1)
        {
            
            cout << mit->second.m_Name << "  年龄:" << mit->second.m_Age << "  工资:" << mit->second.m_Salary << endl;
        }
    }
    cout << "策划部人数：" << m.count(1) << endl;
    cout << "------------------------------------" << endl;
    cout << "美术部：" << endl;
    for(multimap<int,Worker>::const_iterator mit = m.begin();mit != m.end();mit++)
    {  
        if(mit->first == 2)
        {
            
            cout << mit->second.m_Name << "  年龄:" << mit->second.m_Age << "  工资:" << mit->second.m_Salary << endl;
        }
    }
    cout << "美术部人数：" << m.count(2) << endl;
    cout << "------------------------------------" << endl;
    cout << "研发部：" << endl;
    for(multimap<int,Worker>::const_iterator mit = m.begin();mit != m.end();mit++)
    {
        if(mit->first == 3)
        {
            
            cout << mit->second.m_Name << "  年龄:" << mit->second.m_Age << "  工资:" << mit->second.m_Salary << endl;
        }
    }
    cout << "研发部人数:" << m.count(3) << endl;
    cout << "------------------------------------" << endl;
}

void test()
{
    //1.随机种子
    srand((unsigned int)time(NULL));

    //2.创建10名员工放进vector容器中
    vector<Worker> v;
    staff_Recruitment(v);

    //测试vector
    //printVector(v);

    //3.遍历vector容器，取出每个员工，进行随机分组
    multimap<int,Worker> m;
    employeeGroups(m,v);

    //4.分部门显示员工信息
    printMultimap(m);
}

int main()
{
    test();
    return 0;
}