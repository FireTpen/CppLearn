#include <iostream>
using namespace std;

/*
电脑主要组成不见为CPU(用于计算),显卡(用于显示),内存条(用于存储)
每个零件封装出抽象类，并且提供不同的厂商生产不同的零件，例如intel厂商和lenovo厂商
创建电脑类提供让电脑工作的函数，并且调用每个零件工作的接口
测试时，组装三台不同的电脑进行工作。

*/

//抽象类
class CPU
{
public:
    virtual void calculate() = 0;
};

class GPU
{
public:
    virtual void display() = 0;
};

class Memory
{
public:
    virtual void storage() = 0;
};

//电脑类
class Computer
{
public:
    Computer(CPU *cpu,GPU *gpu,Memory *mem)
    {
        m_cpu = cpu;
        m_gpu = gpu;
        m_mem = mem;
    }

    ~Computer()
    {
        cout << "Computer析构函数已调用" << endl;
        cout << "释放前："<< m_cpu << endl;
        if(m_cpu != NULL)
        {
            delete m_cpu;
            m_cpu = NULL;
        }
        if(m_gpu != NULL)
        {
            delete m_gpu;
            m_gpu = NULL;
        }
        if(m_mem != NULL)
        {
            delete m_mem;
            m_mem = NULL;
        }
        cout << "释放后:" << m_cpu << endl;
    }
    
      
    void work()
    {
        m_cpu->calculate();
        m_gpu->display();
        m_mem->storage();
    }

private:
    CPU *m_cpu;
    GPU *m_gpu;
    Memory *m_mem;
};

class IntelCPU :public CPU
{
public:
    void calculate()
    {
        cout << "IntelCPU working!" << endl;
    }
};

class IntelGPU :public GPU
{
public:
    void display()
    {
        cout << "IntelGPU displaying!" << endl;
    }
};
class IntelMem :public Memory
{
public:
    void storage()
    {
        cout << "IntelMemory storaging!" << endl;
    }
};

class LenovoCPU :public CPU
{
public:
    void calculate()
    {
        cout << "LenovoCPU working!" << endl;
    }
};

class LenovoGPU :public GPU
{
public:
    void display()
    {
        cout << "LenovoGPU displaying!" << endl;
    }
};

class LenovoMem :public Memory
{
public:
    void storage()
    {
        cout << "LenovoMemory storaging!" << endl;
    }
};

void test()
{
    //第一台电脑零件
    CPU *intelcpu = new IntelCPU;
    GPU *intelgpu = new IntelGPU;
    Memory *intelmem = new IntelMem;

    //创建第一台电脑
    Computer *pc1 = new Computer(intelcpu,intelgpu,intelmem);
    pc1->work();
    delete pc1;
    
    //创建第二台电脑
    Computer *pc2 = new Computer(new LenovoCPU,new LenovoGPU,new LenovoMem);
    pc2->work();
    delete pc2;
    

}

int main()
{
    test();
    return 0;
}