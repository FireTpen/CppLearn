#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;

/*
关系仿函数:
    可以当作谓词使用，内部构建好的谓词
    例如：
    class greater
    {
    public:
        bool operator()(int v1,int v2)
        {
            return v1 > v2;
        }
    };


*/

void test()
{
    vector<int>v;
    for(int i = 0;i < 10;i++)
    {
        v.push_back(i);
    }
    sort(v.begin(),v.end(),greater<int>());
    for(vector<int>::iterator it = v.begin();it != v.end();it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
    cout << "直接使用:" << endl;
    greater<int>g;
    
    bool ret = g(10,10);
    if(ret)
    {
        cout << "大于" << endl;
    } 
    else
    {
        cout << "小于或等于" << endl;
    }
}

int main()
{
    test();
    return 0;
}