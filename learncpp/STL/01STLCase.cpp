#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <algorithm>

using namespace std;

class Person
{
public:
    Person(string name,int score)
    {
        this->m_Name = name;
        this->m_Score = score;
    }

    string m_Name;
    int m_Score;

};

int Average(deque<int> &d)
{
    int score;

    for(deque<int>::iterator it = d.begin()+1;it != d.end()-1;it++)
    {
        score += *it;
    }

    return (score/8);
}

void printDeque(deque<int> d)
{
    for(deque<int>::iterator it = d.begin();it != d.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void printVector(vector<Person> v)
{
    for(vector<Person>::iterator it = v.begin();it != v.end();it++)
    {
        cout << "姓名:" << it->m_Name << "分数:" << it->m_Score << endl;
    }
}

int ScoreTheCompetition(deque<int> &d)
{
    int score;
    for(int i = 0;i < 10;i++)
    {
        cout << "请"<< i+1 <<"号评委打分(1-9)：";
        cin >> score;
        d.push_back(score);
    }
    cout << "排序前：";
    printDeque(d);
    cout << endl;
    sort(d.begin(),d.end());
    cout << "排序后:";
    printDeque(d);
    cout << endl;

    score = Average(d);

    return score;
}

void test01()
{
    Person p1("A",0);
    Person p2("B",0);
    Person p3("C",0);
    Person p4("D",0);
    Person p5("E",0);

    vector<Person> v;
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    deque<int> d;

    for(vector<Person>::iterator it = v.begin();it != v.end();it++)
    {
        it->m_Score = ScoreTheCompetition(d);
    }

    printVector(v);

}


int main()
{
    test01();
    return 0;
}