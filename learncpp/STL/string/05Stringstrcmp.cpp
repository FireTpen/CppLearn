#include <iostream>
#include <string>

using namespace std;

/*
·字符串之间的比较
·字符串比较是按字符的ASCII码进行对比
 = 返回 0
 > 返回 1
 < 返回 -1

函数原型：
· int compare(const string &s) const;
· int compare(const char *s) const;

*/

void test()
{
    string str1 = "helloworld";
    string str2 = "helloworld";
    string str3 = "hello";
    int ret;
    ret = str1.compare(str2);
    if(ret == 0)
    {
        cout << "字符串相等" << endl;
    }
    else if(ret == 1)
    {
        cout <<"左边大于右边" << endl;
    }
    else
    {
        cout << "右边大于左边" << endl;
    }
    ret = str1.compare(str3);
    if(ret == 0)
    {
        cout << "字符串相等" << endl;
    }
    else if(ret == 1)
    {
        cout <<"左边大于右边" << endl;
    }
    else
    {
        cout << "右边大于左边" << endl;
    }
}

int main()
{
    test();
    return 0;
}
