#include <iostream>
#include <string>

using namespace std;

void test()
{
    string str = "hello world";

   // 1.通过[]访问单个字符
    for(int i = 0; i < str.size();i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;
    //2.通过at访问单个字符
    for(int i = 0;i < str.size();i++)
    {
        cout << str.at(i) << " ";
    }
    cout << endl;
    //修改单个字符
    str[8] = 'x';
    cout << str << endl;
    str.at(1) = 'x';
    cout << str << endl;
}

int main()
{

    test();
    return 0;
}