#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <numeric>

using namespace std;

void test()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);
    v.push_back(3);
    v.push_back(4);

    vector<int>::iterator pos = adjacent_find(v.begin(),v.end());
    for(int i = 0;i < 4;i++)
    {
        cout << (*pos) << " ";
        pos++;
    }
    cout << endl;




}

int main()
{
    test();
    return 0;
}