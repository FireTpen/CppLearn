#include <iostream>
#include <string>

using namespace std;

/*
string构造函数原型
·string();                  //创建一个空的字符串
·string(const char* s);     //使用字符串s初始化
·string(const string& str); //使用一个string对象初始化另一个string对象
·string(int n,char c);      //使用n个字符c初始化

*/


void test01()
{
  //1.string默认构造
  string s1 = "nihao";
  cout << "str1 = " << s1 << endl;

  //2.使用字符串初始化
  const char* c2 = "hello world";
  string s2(c2);
  cout << "str2 = " << s2 << endl;

  //3.使用一个string对象初始化另一个string对象
  string s3(s2);
  cout << "str3 = " << s3 << endl;

  //4.使用n个字符初始化
  string s4(10,'a');
  cout << "str4 = " << s4 << endl;  


}

int main()
{
    test01();
    return 0;
}