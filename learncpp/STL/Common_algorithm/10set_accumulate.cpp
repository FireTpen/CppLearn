#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;
void print01(int val)
{
    cout << val << " ";
}

//set_intersection 交集
void test()
{
    vector<int>v1;
    vector<int>v2;
    for(int i = 0;i < 10;i++)
    {
        v1.push_back(i);
        v2.push_back(i+5);
    }
    vector<int>vt;
    //取两个容器里面较小的那个给目标容器开辟空间
    vt.resize(min(v1.size(),v2.size()));

    vector<int>::iterator itEnd = set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),vt.begin());

    for_each(vt.begin(),itEnd,print01);
    cout << endl;

}

//set_union 并集
void test02()
{
    vector<int>v1;
    vector<int>v2;
    for(int i = 0;i < 10;i++)
    {
        v1.push_back(i);
        v2.push_back(i+100);
    }
    vector<int>vt;
    //两个容器大小相加给目标容器开辟空间
    vt.resize(v1.size()+v2.size());

    vector<int>::iterator itEnd = set_union(v1.begin(),v1.end(),v2.begin(),v2.end(),vt.begin());

    for_each(vt.begin(),itEnd,print01);
    cout << endl;
}

//set_difference 差集
void test03()
{
    vector<int>v1;
    vector<int>v2;
    for(int i = 0;i < 10;i++)
    {
        v1.push_back(i);
        v2.push_back(i+5);
    }
    vector<int>vt;
    //求差集，取最大容器的空间给目标容器开辟空间
    vt.resize(max(v1.size(),v2.size()));

    //v1对v2求差集
    cout << "v1对v2求差集:";
    vector<int>::iterator itEnd = set_difference(v1.begin(),v1.end(),v2.begin(),v2.end(),vt.begin());
    for_each(vt.begin(),itEnd,print01);
    cout << endl;

    cout << "v2对v1求差集:";
    vector<int>::iterator it2End = set_difference(v2.begin(),v2.end(),v1.begin(),v1.end(),vt.begin());
    for_each(vt.begin(),it2End,print01);
    cout << endl;
}

int main()
{
    //test();
    //test02();
    test03();
    return 0;
}