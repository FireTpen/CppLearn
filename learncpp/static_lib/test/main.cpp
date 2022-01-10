#include <iostream>
#include "Multip.h"
#include "Add.h"
#include "Minus.h"

using namespace std;

void test()
{
    int a = 10;
    int b = 20;

    cout << "a + b = " << myAdd(a,b) << endl;
    cout << "a - b = " << myMinus(a,b) << endl;
    cout << "a * b = " << myMultip(a,b) << endl;
    

}

int main()
{
    test();
    return 0;
}