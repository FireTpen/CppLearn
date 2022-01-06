#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <numeric>

using namespace std;

void test()
{
    vector<int>v;
    for(int i = 0;i < 10;i++)
    {
        v.push_back(i);
    }

    bool ret = binary_search(v.begin(),v.end(),11);
    if(ret)
    {
        cout << "已找到" << endl;
    }
    else
    {
        cout << "没有找到" << endl;
    }

}

int main()
{
    test();
    return 0;
}