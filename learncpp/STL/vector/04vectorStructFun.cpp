#include<iostream>
#include <vector>

using namespace std;

void printVector(vector<int> &v)
{
    for(vector<int>::iterator its = v.begin();its != v.end();its++)
    {
        cout << *its << " ";
    }
    cout << endl;

}

void test01()
{
    vector<int> v1; //无参构造
    for(int i = 0;i < 10;i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    vector<int> v2(v1.begin(),v1.end());
    printVector(v2);

    vector<int> v3(10,100);
    printVector(v3);

    vector<int> v4(v1);
    printVector(v4);
}

int main()
{
    test01();
    return 0;
}