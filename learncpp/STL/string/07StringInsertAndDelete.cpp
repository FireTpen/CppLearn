#include <iostream>
#include <string>

using namespace std;


void test()
{
    string str = "hello";

    str.insert(1,"111");
    cout << str << endl;

    str.erase(1,3);
    cout << str << endl;

}

int main()
{
    test();

    return 0;
}