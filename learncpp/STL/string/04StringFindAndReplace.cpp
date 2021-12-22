#include <iostream>
#include <string>
using namespace std;

/*
总结：·find查找是从左往右，rfind从右往左 
      ·find找到字符串后返回查找的第一个字符位置，找不到返回-1
      ·replace在替换时，要指定从那个位置起，多少个字符，替换成什么样的字符串
*/
//1.查找
void test01()
{
    string str1 = "abcdefg";
    
    int pos = str1.find("de");

    if(pos == -1)
    {
        cout << "未找到字符串"<< endl;
    }
    else
    {
        cout << "找到字符串你，pos=" << pos << endl;
    }

    //rfind
    str1.rfind("de");
    cout << "pos = " << pos << endl;
    
}

void test02()
{
    string str2 = "abcdefg";

    str2.replace(1,3,"1234");
    cout << "str2 = " << str2 << endl;

}

int main()
{
    test01();
    test02();
    return 0;
}