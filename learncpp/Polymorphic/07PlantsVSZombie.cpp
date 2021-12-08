#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/*植物大战僵尸
1.抽象类：植物类、僵尸类、关卡类
2.派生类：植物：豌豆射手、太阳花、坚果墙
         僵尸：普通僵尸、奔跑僵尸、橄榄球僵尸

*/

//1.抽象类
//植物类
class Plants
{
public:
    virtual void establish() = 0;//创建植物
};

//僵尸类
class Zombies
{
public:
    virtual void refresh() = 0; //刷新僵尸
};
//关卡类
class Level
{
public:
    virtual void level() = 0; //关卡
};

//植物大战僵尸
class PlantsVSZombies
{
public:
    PlantsVSZombies(Plants *plant,Zombies *zombie,Level *level)
    {   
        m_plant = plant;
        m_zombie = zombie;
        m_level = level;
    }
    ~PlantsVSZombies()
    {
        cout <<"游戏结束"<< endl;
        if(m_plant != NULL)
        {
            delete m_plant;
            m_plant = NULL;
        }
        if(m_zombie != NULL)
        {
            delete m_zombie;
            m_zombie = NULL;
        }
        if(m_level != NULL)
        {
            delete m_level;
            m_level = NULL;
        }
    }

    void playing()
    {
        m_level->level();
      
        m_zombie->refresh();
   
        m_plant->establish();
        cout << "豌豆射手开始射击" << endl;
    
        cout << "僵尸被击倒" << endl;
    
    }

private:
    Plants *m_plant;
    Zombies *m_zombie;
    Level *m_level;
};

//2.派生类
//植物类
//豌豆射手
class Peashooter : public Plants
{
public:
    void establish()
    {
        cout << "放置豌豆射手！" << endl;
    }
};
//普通僵尸
class OrdinaryZombie : public Zombies
{
public:
    void refresh()
    {
        cout << "刷新普通僵尸" << endl;
    }
};
//关卡1-1
class LevelOneToOne : public Level
{
public:
    void level()
    {
        cout << "进入关卡1-1" << endl;
    }
};

void test()
{
    PlantsVSZombies *pvsz = new PlantsVSZombies(new Peashooter,new OrdinaryZombie,new LevelOneToOne);
    pvsz->playing();
    delete pvsz;
};

int main()
{
    test();
    return 0;
}