#include <iostream>
#include <string>

using namespace std;

void test()
{
    string str = "hello world";
    string str2 = str.substr(6,5);

    cout << str2 << endl;
}

//实用操作
void test02()
{
    string email = "2580808882@qq.com";

    int ret = email.find("@");

    string get = email.substr(0,ret);

    cout << get << endl;
}


int main()
{

    test();
    test02();
    return 0;
}