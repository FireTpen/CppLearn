#include <iostream>

using namespace std;

const double PI = 3.14; //圆周率

/*类:一个种类。  
例如人类，车类，球类。 人类的属性：有姓名、身高、体重、性别、年龄等。
人类的行为:有行走、跳、说话、看、听等。
*/

//示例1，创建一个圆的类，通过类新建一个圆，并求其周长
class Circle
{
    //访问权限
    //公共权限
public:     //下面是类的属性和动作
    //属性
    int radius;   //半径

    //动作
    double perimeter()
    {
        return 2*PI*radius;
    }  

};



int main()
{
    Circle c1;
    cout << "请输入圆的半径:";
    cin >> c1.radius;
    cout << "圆的周长为:" << c1.perimeter() << endl;


    return 0;
}