#include <iostream>
using namespace std;
#include "../include/speechManager.h"


int main()
{
    //创建管理类对象
    SpeechManager sm;

    //测试代码
    // for(map<int,Speaker>::iterator mit = sm.m_Speaker.begin();mit != sm.m_Speaker.end();mit++)
    // {
    //     cout << "选手编号:" << mit->first 
    //                     << "  姓名:" << mit->second.m_Name 
    //                     << "  分数:" << mit->second.m_Score[0] << endl;
    // }

    int choice;     //用来存储用户的选项
    srand((unsigned int)time(NULL));

    while(true)
    {
        sm.show_Menu();
        cout << "请输入您的选择:";
        cin >> choice;

        switch(choice)
        {
            case 0:     //退出系统
                sm.exitSystem();
                break;
            case 1:     //开始比赛
                sm.startSpeech();
                break;
            case 2:     //查看记录
                //sm.loadRecord();
                sm.showRecord();
                break;
            case 3:     //清空记录
                sm.clearRecord();
                break;
            default:
                system("clear");  //清屏
                break;
        }

    }
    



    return 0;
}