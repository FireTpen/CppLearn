#include <iostream>

using namespace std;

/*��̬��C++���������������֮һ
��̬��Ϊ����
����̬��̬���������غ�����������������ھ�̬��̬�����ú�����
����̬��̬����������麯��ʵ������ʱ��̬

��̬��̬�Ͷ�̬��̬����
����̬��̬�ĺ�����ַ���-����׶�ȷ��������ַ
����̬��̬�ĺ�����ַ���-���н׶�ȷ��������ַ

*/
//������
class Animal
{
public:
    //�麯��
    virtual void speak()
    {
        cout << "������˵��" << endl;
    }
};
//è��
class Cat : public Animal
{
public:
    void speak()
    {
        cout << "Сè��˵��" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "С����˵��" << endl;
    }
};

//ִ��˵���ĺ���
//��C++��������֮�������ת��������Ҫ��ǿ������ת���������ָ�����ֱ��ָ������
//�����ִ����è˵������ô���������ַ�Ͳ�����ǰ��

/*
    ��̬��̬��������
    1���м̳й�ϵ
    2������Ҫ��д�����е��麯������д������������ֵ���� ������ �����б���ȫ��ͬ
*/
void doSpeak(Animal& animal) //Animal &animal = cat;
{
    animal.speak();
}

void test01()
{
    Animal a;
    cout << "sizeof = " << sizeof(Dog) << endl;
    Cat cat;
    doSpeak(cat);
    Dog dog;
    doSpeak(dog);
}

int main()
{
    test01();

    return 0;
}