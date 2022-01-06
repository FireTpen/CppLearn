#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<bool> &v)
{
    for(vector<bool>::const_iterator it = v.begin();it != v.end();it++)
    {
        cout << (*it) << endl;
    }

}

void test()
{
    vector<bool>v;
    
    v.push_back(true);
    v.push_back(false);
    v.push_back(true);
    v.push_back(false);
    //搬运前
    cout << "v:" << endl;
    printVector(v);

    //利用逻辑非 将容器v搬运到容器v2中，并执行取反操作
    vector<bool>v2;
    v2.resize(v.size());

    transform(v.begin(),v.end(),v2.begin(),logical_not<bool>());
    cout << "v2:" << endl;
    printVector(v2);

}

int main()
{
    test();

    return 0;
}