#include <iostream>
//1.第一步，先写头文件 <fstream>
#include <fstream>

#include <string>
using namespace std;

//第二步，文本文件，写文件
void test()
{
    //1.创建流对象
    ofstream ofs;
    //2.打开文件,指定打开方式
    ofs.open("test.txt",ios::out);
    //3.写内容
    ofs << "我爸是李刚" << endl;
    ofs << "我爸你爸" << endl;
    ofs << "怎么着？" << endl;
    //4.关闭文件
    ofs.close();
}

int main()
{
    test();
    return 0;
}