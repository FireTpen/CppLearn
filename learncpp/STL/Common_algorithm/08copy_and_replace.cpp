#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>
#include <numeric>

using namespace std;

void printvector(vector<int> &v)
{
    for(vector<int>::iterator it = v.begin();it != v.end();it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
}

//普通函数
void print01(int val)
{
    cout << val << " ";
}

//copy算法测试
void test()
{
    vector<int>v;
    for(int i = 0;i < 10;i++)
    {
        v.push_back(i);
    }
    printvector(v);

    vector<int>vt;
    vt.resize(v.size());    //每次进行目标容器操作时都要给目标容器扩容

    copy(v.begin(),v.end(),vt.begin());

    //printvector(vt);
    //for_each算法进行遍历
    for_each(v.begin(),v.end(),print01);
    cout << endl;
}

//replace算法(将容器内指定反胃的旧元素改为新元素)
void test02()
{
    vector<int>v;
    for(int i = 0;i < 5;i++)
    {
        v.push_back(i);
        v.push_back(i);
    }
    cout << "替换前:";
    for_each(v.begin(),v.end(),print01);
    cout << endl;

    //replace算法进行替换
    replace(v.begin(),v.end(),3,7);
    cout << "替换后:";
    for_each(v.begin(),v.end(),print01);
    cout << endl;
}

class MyCompare
{
public:
    bool operator()(int val)
    {
        return val >= 13;
    }
};

//replace_if算法(根据指定条件替换旧元素)
void test03()
{
    vector<int>v;
    for(int i = 10;i < 15;i++)
    {
        v.push_back(i);
        v.push_back(i);
    }

    cout << "替换前:";
    for_each(v.begin(),v.end(),print01);
    cout << endl;
    replace_if(v.begin(),v.end(),MyCompare(),100);
    cout << "替换后:";
    for_each(v.begin(),v.end(),print01);
    cout << endl;
}

//swap算法(两个容器互换元素)
void test04()
{
    vector<int>v;
    for(int i = 0;i < 5;i++)
    {
        v.push_back(i);
    }
    vector<int>vt;
    for(int i = 0;i < 10;i++)
    {
        vt.push_back(i);
    }

    
    cout << "swap前:" << endl;
    cout << "v:";
    for_each(v.begin(),v.end(),print01);
    cout << endl;
    cout << "vt:";
    for_each(vt.begin(),vt.end(),print01);
    cout << endl;

    //swap()
    swap(v,vt);

    cout << "swap后:" << endl;
    cout << "v:";
    for_each(v.begin(),v.end(),print01);
    cout << endl;
    cout << "vt:";
    for_each(vt.begin(),vt.end(),print01);
    cout << endl;
}

int main()
{
    //test();
    //test02();
    //test03();
    test04();
    return 0;
}