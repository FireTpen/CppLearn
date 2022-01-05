#include <iostream>
#include <string>

using namespace std;

void test()
{
    pair<string,int> p("南波儿",36);
    cout << "姓名:" << p.first << " 雄伟:" << p.second << endl;

    pair<string,int> p2("兔丸儿",42);
    cout << "姓名:" << p2.first << " 雄伟:" << p2.second << endl;
}

int main()
{
    test();
    return 0;
}