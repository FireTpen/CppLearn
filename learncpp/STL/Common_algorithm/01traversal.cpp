#include <iostream>
#include <algorithm>
#include <functional>
#include <numeric>
#include <vector>
using namespace std;

//1.普通函数
void print01(int val)
{
    cout << val << " ";
}

//2.仿函数
class print02
{
public:
    void operator()(int val)
    {
        cout << val << " ";
    }
};

void test()
{
    vector<int> v;
    for(int i = 0;i < 10;i++)
    {
        v.push_back(i);
    }

    for_each(v.begin(),v.end(),print01);
    cout << endl;

    for_each(v.begin(),v.end(),print02());
    cout << endl;


}

int main()
{
    test();
    return 0;
}