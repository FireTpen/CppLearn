#include <iostream>
#include <string>
using namespace std;

/*
实现字符串末尾拼接字符串

·string& operator+=(const char* str);           //重载+=操作符
·string& operator+=(const char c);              //重载+=操作符
·string& operator+=(const string& str);         //重载+=操作符
·string& append(const char *s);                 //把字符串s连接到当前字符串结尾
·string& append(const char *s,int n);           //把字符串s的前n个字符链接到当前字符串结尾
·string& append(const string &s);               //同operator++(const string& str)
·string& append(const string &s,int pos, int n);  //字符串s中从pos开始的n个字符链接到字符串结尾


*/

void test()
{
    //1.
    string str1 = "我";
    str1+="是你";
    cout << "str1 = " << str1 << endl;

    //2.
    str1 += ':';
    cout << "str1 = " << str1 << endl;

    //3.
    string str2 = "爸爸";
    str1 += str2;
    cout << "str1 = " << str1 << endl;

    //4.
    str1.append("的爷爷");
    cout << "str1 = " << str1 << endl;

    //5.
    str1.append("abcde",2);
    cout << "str1 = " << str1 << endl;
    //6.
    str1.append(str2);
    cout << "str1 = " << str1 << endl;
    //7.
    str1.append("nihaoa",2,3);
    cout << "str1 = " << str1 << endl;
}

int main()
{
    test();
    return 0;
}
