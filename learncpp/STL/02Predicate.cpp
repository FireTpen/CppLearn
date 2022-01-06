#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/*
什么是谓词？
答：返回值为BOOL类型的仿函数(函数对象)称为谓词。
*/



//1.一元谓词
class GreaterFive
{
public:
    bool operator()(int val)
    {
        return val > 5;
    }
};

void test01()
{
    //1.创建vector容器进行测试
    vector<int> v;
    for(int i = 0;i < 10;i++)
    {
        v.push_back(i);
    }

    vector<int>::iterator it = find_if(v.begin(),v.end(),GreaterFive());
    if(it == v.end())
    {
        cout << "未找到" << endl;
    }
    else
    {
        cout << "找到了大于5的数字为:" << *it << endl;  
    }
}

//2.二元谓词
class MyCompare
{
public:
    bool operator()(int v1,int v2)
    {
        return v1 > v2;
    }
};

void printVector(vector<int> &v)
{
    for(vector<int>::iterator it = v.begin();it != v.end();it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
}

void test02()
{
    vector<int> v;
    for(int i = 0;i < 10;i++)
    {
        v.push_back(i);
    }
    cout << "倒序前:";
    printVector(v);

    cout << "倒序后:";
    sort(v.begin(),v.end(),MyCompare());
    printVector(v);

}


int main()
{
    //test01();
    test02();
    return 0;
}