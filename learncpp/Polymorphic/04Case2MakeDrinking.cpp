#include <iostream>

using namespace std;

/*
案例二、用多态实现冲茶和冲咖啡的流程
*/

//创建一个饮品抽象类
class AbstractDrinking
{
public:
    //1.煮水
    virtual void Boil() = 0;
    //2.加入主料
    virtual void MainIngredient() = 0; 
    //3.冲泡
    virtual void Brew() = 0;
    //4.加入辅料
    virtual void ingredient() = 0;
    //制作工序
    void ProductionProcess()
    {
        Boil();
        MainIngredient();
        Brew();
        ingredient();
    }
};

//冲咖啡
class Coffee : public AbstractDrinking
{
public:
    //1.煮水
    virtual void Boil()
    {
        cout << "加入农夫山泉" << endl;
    }
    //2.加入主料
    virtual void MainIngredient()
    {
        cout << "加入咖啡粉" << endl;
    }
    //3.冲泡
    virtual void Brew()
    {
        cout << "冲泡咖啡" << endl;
    }
    //4.加入辅料
    virtual void ingredient()
    {
        cout << "加入牛奶和糖" << endl;
    }

};

//冲茶
class Tea : public AbstractDrinking
{
public:
    //1.煮水
    virtual void Boil()
    {
        cout << "加入百岁山" << endl;
    }
    //2.加入主料
    virtual void MainIngredient()
    {
        cout << "加入龙井乌龙" << endl;
    }
    //3.冲泡
    virtual void Brew()
    {
        cout << "泡茶叶" << endl;
    }
    //4.加入辅料
    virtual void ingredient()
    {
        cout << "倒入杯中" << endl;
    }

};

void making(AbstractDrinking *asd)
{
    asd->ProductionProcess();
    delete asd;
}

void test()
{
    //1.煮咖啡
    making(new Coffee);

    cout << "--------------------" << endl;
    //2.煮茶
    making(new Tea);
}

int main()
{
    test();

    return 0;
}