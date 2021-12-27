#include <iostream>
#include <vector>
#include <string>
using namespace std;


void test()
{
    vector<string> v1;
    v1.push_back("你好啊傻逼");
    vector<string> v2;
    v2.push_back("我带你们打");
    cout << "交换前" << endl;
    cout << "v1 = " << v1[0] << endl;
    cout << "v2 = " << v2[0] << endl;
    cout << "交换后" << endl;
    v2.swap(v1);
    cout << "v1 = " << v1[0] << endl;
    cout << "v2 = " << v2[0] << endl;
}


int main()
{
    test();
    return 0;
}