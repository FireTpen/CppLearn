#include "../include/speechManager.h"

//构造函数
SpeechManager::SpeechManager()
{
    //初始化容器和属性
    this->initSpeech();

    //创建选手
    this->createSpeaker();

    //获取往届记录
    this->loadRecord();
}

//展示菜单
void SpeechManager::show_Menu()
{
    cout << "********************************************" << endl;
    cout << "************* 欢迎参加演讲比赛  ************" << endl;
    cout << "*************  1.开始演讲比赛   ************" << endl;
    cout << "*************  2.查看往届记录   ************" << endl;
    cout << "*************  3.清空比赛记录   ************" << endl;
    cout << "*************  0.退出比赛程序   ************" << endl;
    cout << "********************************************" << endl;
    cout << endl;
}

//退出系统
void SpeechManager::exitSystem()
{
    cout << "欢迎下次使用!" << endl;
    
    exit(0);
}

//初始化容器和属性
void SpeechManager::initSpeech()
{
    //容器都置空
    this->v1.clear();
    this->v2.clear();
    this->vVictory.clear();
    this->m_Speaker.clear();

    //初始化比赛轮数
    this->m_Index = 1;

    //初始化记录容器
    this->m_Record.clear();
}

//初始化创建12名选手
void SpeechManager::createSpeaker()
{
    string nameSeed = "ABCDEFGHIJKL";
    for(int i = 0;i < nameSeed.size();i++)
    {
        string name = "选手";
        name += nameSeed[i];

        Speaker sp;
        sp.m_Name = name;

        //将选手两轮分数初始化为0
        for(int i = 0;i < 2;i++)
        {
            sp.m_Score[i] = 0;
        }

        //12名选手的编号
        this->v1.push_back(i + 10001);

        //选手编号以及对应的选手 存放到map容器中
        this->m_Speaker.insert(make_pair(i+10001,sp));
        
    }

}

//开始比赛- 比赛流程控制
void SpeechManager::startSpeech()
{
    //第一轮比赛

    //1.抽签
    this->speechDraw();
    //2.比赛
    this->speechContest();
    //3.显示晋级结果
    this->showScore();

    //第二轮比赛
    this->m_Index++;

    //1.抽签
    this->speechDraw();
    //2.比赛
    this->speechContest();
    //3.显示最终结果
    this->showScore();
    //4.保存分数
    this->saveRecord();

    //重制比赛，获取记录
    //初始化容器和属性
    this->initSpeech();

    //创建选手
    this->createSpeaker();

    //获取往届 记录
    this->loadRecord();
    this->m_Index = 1;
}

//抽签
void SpeechManager::speechDraw()
{
    cout << "第 << " << this->m_Index << " >> 轮比赛选手正在抽签" << endl;
    cout << "------------------------" << endl;
    cout << "抽签后演讲顺序如下:" << endl;
    if(this->m_Index == 1)
    {
        random_shuffle(v1.begin(),v1.end());    //洗牌
        for(vector<int>::iterator it = this->v1.begin();it != this->v1.end();it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    else if(m_Index == 2)
    {
        random_shuffle(v2.begin(),v2.end());    //洗牌
        for(vector<int>::iterator it = this->v2.begin();it != this->v2.end();it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    cout << "------------------------" << endl;
}

//开始比赛
void SpeechManager::speechContest()
{
    cout << "--------------第"<< this->m_Index << "轮正式比赛开始: --------------" << endl;
    multimap<double,int,greater<double>> groupScore;    //临时容器，保存 key分数 value选手编号

    int num = 0; //记录人员数，6个为1组

    vector<int>v_Src;   //比赛人员容器
    if(this->m_Index == 1)
    {
        v_Src = v1;
    }
    else
    {
        v_Src = v2;
    }

    //遍历所有参赛选手
    for(vector<int>::iterator it = v_Src.begin();it != v_Src.end();it++)
    {
        num++;

        //评委打分
        deque<double> d;
        for(int i = 0;i < 10;i++)
        {
            double score = (rand() % 401 + 600) / 10.f; //600~1000
            //cout << score << " ";
            d.push_back(score);
        }

        sort(d.begin(),d.end(),greater<double>());  //排序
        d.pop_front();  //去头
        d.pop_back();   //去尾

        double sum = accumulate(d.begin(),d.end(),0.0f); //获取总分
        double avg = sum / (double)d.size();

        this->m_Speaker[*it].m_Score[this->m_Index - 1] = avg;

        //6个人一组，用临时容器保存
        groupScore.insert(make_pair(avg,*it));
        if(num % 6 == 0)
        {
            cout << "第" << num / 6 << "小组比赛名次:" << endl;
            for(multimap<double,int,greater<double>>::iterator it = groupScore.begin();it != groupScore.end();it++)
            {
                cout << "编号:" << it->second << "  姓名:" 
                << this->m_Speaker[it->second].m_Name 
                << "  成绩:" << this->m_Speaker[it->second].m_Score[this->m_Index - 1] << endl;
            }
        
            int count = 0;
            //取前三名
            for(multimap<double,int,greater<double>>::iterator it = groupScore.begin();it != groupScore.end()&& count < 3;it++,count++)
            {
                if(this->m_Index == 1)
                {
                    v2.push_back((*it).second);
                }
                else
                {
                    vVictory.push_back((*it).second);
                }
                
            }
            groupScore.clear();
            cout << endl;
        }
    }
    
}

//显示分数
void SpeechManager::showScore()
{
    cout << "-------------第" << this->m_Index << "轮晋级选手信息如下:-----------" << endl;
    vector<int> v;
    if(this->m_Index == 1)
    {
        v = v2;
    }
    else
    {
        v = vVictory;
    }
    

    for(vector<int>::iterator it = v.begin();it != v.end();it++)
    {
        cout << "选手编号: " << *it << "  姓名: " << m_Speaker[*it].m_Name << "  得分：" << m_Speaker[*it].m_Score[this->m_Index - 1] << endl;
    }
    cout << endl;

}

//保存分数
void SpeechManager::saveRecord()
{
    ofstream ofs;
    ofs.open("../docs/speech.csv",ios::out | ios::app); //用输出的方式打开文件 --写文件

    //将每个人数据写入到文件中
    for(vector<int>::iterator it = this->vVictory.begin();it != this->vVictory.end();it++)
    {
        ofs << *it << "," << m_Speaker[*it].m_Score[1] << ",";
    }
    ofs << endl;

    //关闭文件
    ofs.close();

    cout << "记录已保存" << endl;
}

//读取记录
void SpeechManager::loadRecord()
{
    ifstream ifs("../docs/speech.csv",ios::in); //输入流对象 读取文件

    if(!ifs.is_open())
    {
        this->fileIsEmpty = true;
        cout << "文件不存在!" << endl;
        ifs.close();
        return;
    }

    char ch;
    ifs >> ch;  //让ifs只读一个字符， 如果读取一个字符就到文件末尾，那么文件为空
    if(ifs.eof())
    {
        cout << "文件为空!" << endl;
        this->fileIsEmpty = true;
        ifs.close();
        return;
    }

    //文件不为空
    this->fileIsEmpty = false;

    ifs.putback(ch);    //读取单个字符放回去

    string data;
    int index = 0;
    while(ifs >> data)
    {
        //cout << data << endl;
        vector<string>v;

        int pos = -1;
        int start = 0;

        while(true)
        {
            pos = data.find(",",start); //从0开始查找','
            if(pos == -1)
            {
                break; //找不到break返回
            }
            string tmp = data.substr(start,pos - start);//找到了，进行分割，参数1，起始位置，参数2截取长度
            v.push_back(tmp);
            start = pos + 1;

        }
        this->m_Record.insert(make_pair(index,v));
        index++;
    }

    ifs.close();
}

//显示往届得分
void SpeechManager::showRecord()
{
    for(int i = 0;i < this->m_Record.size();i++)
    {
        cout << "第" << i+1 << "届" <<
        "冠军编号:" << this->m_Record[i][0] << "得分:" << this->m_Record[i][1] << " "
        "亚军编号:" << this->m_Record[i][2] << "得分:" << this->m_Record[i][3] << " "
        "季军编号:" << this->m_Record[i][4] << "得分:" << this->m_Record[i][5] << endl;
    }
}

//清空记录
void SpeechManager::clearRecord()
{
    cout << "确认清空?" << endl;
    cout << "1、确认"  << endl;
    cout << "2、返回"  << endl;

    int select = 0;
    cin >> select;

    if(select == 1)
    {
        //打开模式 ios::trunc 如果文件存在，删除文件并重新创建
        ofstream ofs("../docs/speech.csv",ios::trunc);
        ofs.close();

        //初始化容器和属性
        this->initSpeech();

        //创建选手
        this->createSpeaker();

        //获取往届记录
        this->loadRecord();

        cout << "清空成功!" << endl;
    }
}

//析构函数
SpeechManager::~SpeechManager()
{


}