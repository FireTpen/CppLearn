#include <iostream>

using namespace std;

/*设计立方体
求出立方体的面积和体积
分别用全局函数和成员函数判断两个立方体是否相等
*/

class Cube
{
public:
    //写名字
    void set_Name(string name)
    {
        m_Name = name;
    }
    //读名字
    string get_Name()
    {
        return m_Name;
    }
    //写入边长
    void set_LengthOfSide(double length)
    {
        m_Length = length;
    }
    //读取边长
    double get_LengthOfSide()
    {
        return m_Length;
    }
    
    //立方体体积
    double get_Volume()
    {
        return m_Length*m_Length*m_Length;
    }
    //立方体面积
    double get_Area()
    {
        return m_Length*m_Length*6;
    }

    void get_Judge_Cube_Size(Cube c_length)
    {
        if(m_Length == c_length.get_LengthOfSide())
        {
            cout << "这两个立方体相等" << endl;
        }
        else if(m_Length > c_length.get_LengthOfSide())
        {
            cout << m_Name <<"比" << c_length.get_Name() << "大" << endl;
        }
        else
        {
            cout << "c1比c2小" << endl;
        }

    }

private:
    string m_Name;
    double m_Length;
     
};


void Judge_Cube_Size(Cube c1,Cube c2)
{
    if(c1.get_LengthOfSide() == c2.get_LengthOfSide())
    {
        cout << "这两个立方体相等" << endl;
    }
    else if(c1.get_LengthOfSide() > c2.get_LengthOfSide())
    {
        cout << "c1比c2大" << endl;
    }
    else
    {
        cout << "c1比c2小" << endl;
    }

}


int main()
{
    Cube c1,c2;
    c1.set_Name("立方体1");
    c2.set_Name("立方体2");
    c1.set_LengthOfSide(6);
    c2.set_LengthOfSide(6);

    Judge_Cube_Size(c1,c2);


    return 0;
}