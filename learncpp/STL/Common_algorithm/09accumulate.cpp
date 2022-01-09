#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>

using namespace std;

//accumulate测试
void test()
{
    vector<int>v;
    for(int i = 1;i <= 100;i++)
    {
        v.push_back(i);
    }
    //.accumulate统计容器内元素累计总和
    int sum = accumulate(v.begin(),v.end(),1);
    cout << sum << endl;
    
}


void print02(int val)
{
    cout << val << " ";
}

//fill算法测试
void test02()
{
    vector<int>v;
    v.resize(10);

    fill(v.begin(),v.end(),7);
    for_each(v.begin(),v.end(),print02);
    cout << endl;
}

int main()
{
    //test();
    test02();
    return 0;
}