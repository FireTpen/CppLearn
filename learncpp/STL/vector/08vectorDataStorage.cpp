#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> &v)
{
    for(vector<int>::iterator it = v.begin();it != v.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}


void test()
{

    vector<int> v1;
    for(int i = 0;i < 5;i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    cout << "用at()索引第3个元素:" << v1.at(2) << endl;
    cout << "用[]索引第2个元素:" << v1[1] << endl;

    int a = v1.front();
    cout << "front() = " << a << endl;
    int b = v1.back();
    cout << "back() = " << b << endl;


}

int main()
{
    test();

    return 0;
}