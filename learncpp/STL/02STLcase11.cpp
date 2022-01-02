#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <ctime>
#include <algorithm>

using namespace std;
//选手类
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

//创建选手
void create_Person_To_Vector(vector<Person> &v)
{
    //编号字符串种子
    string nameSeed = "ABCDE";
    int score = 0;
    for(int i = 0;i < 5;i++)
    {
        string name = "选手";
        name += nameSeed[i];    //通过遍历的方式创建ABCDE五位选手

        Person p(name,score);
        v.push_back(p);       
    }
    //测试
    // for(vector<Person>::iterator it = v.begin();it != v.end();it++)
    // {
    //     cout << "选手：" << (*it).m_Name << "评分:" << (*it).m_Score << endl;
    // }
}

//评分数
void set_Score(vector<Person> &v)
{
    for(vector<Person>::iterator it = v.begin();it != v.end();it++)
    {
        //用deque容器给选手打10个评分
        deque<int> d;
        for(int i = 0;i < 10;i++)
        {
            int score = rand() % 41 + 60;   //在60~100之间取随机数
            d.push_back(score);
        }

        //sort给deque容器排序
        sort(d.begin(),d.end());

        //去掉首位分数
        d.pop_back();   //去掉最后一个数
        d.pop_front();  //去掉第一个数

        //deque累计一遍，累加总分
        int sum = 0;
        for(deque<int>::iterator dit = d.begin();dit != d.end();dit++)
        {
            sum += *dit;
        }
        //获取平均分
        (*it).m_Score = sum/d.size();
    }

}

//展示分数
void show_Score(vector<Person> &v)
{
    for(vector<Person>::iterator it = v.begin();it != v.end();it++)
    {
        cout << "选手:" << (*it).m_Name << "分数:" << (*it).m_Score << endl;
    }
}

void test01()
{
    //随机数种子
    srand((unsigned int)time(NULL));
    //1.创建vector容器
    vector<Person> v;
    //2.创建五名选手，放到vector中
    create_Person_To_Vector(v);
    //3.遍历vector容器，给每一位选手打分
    set_Score(v);
    //4.展示分数
    show_Score(v);
}

int main()
{
    test01();
    return 0;
}