#include <iostream>

using namespace std;

int main19()
{
	int score,m;
	cout << "请输入分数:" << endl;
	cin >> score;
	cout << "请输入美术成绩:" << endl;
	cin >> m;
	////单语句if
	//if (score > 60)
	//{
	//	cout << "成绩为:" << score << "及格" << endl;
	//}

	////多行语句if
	//if (score > 60)
	//{
	//	cout << "成绩为:" << score << "及格" << endl;
	//}
	//else
	//{
	//	cout << "成绩为:" << score << "不及格" << endl;
	//}

	////多条件语句if

	//if (score >= 60 && score < 70)
	//{
	//	cout << "D" << endl;
	//}
	//else if (score >= 70 && score < 80)
	//{
	//	cout << "C" << endl;
	//}
	//else if (score >= 80 && score < 90)
	//{
	//	cout << "B" << endl;
	//}
	//else if (score >= 90 && score <= 100)
	//{
	//	cout << "A" << endl;
	//}
	//else if (score < 60 && score >= 0)
	//{
	//	cout << "成绩不及格" << endl;
	//}
	//else
	//{
	//	cout << "您输入成绩有误" << endl;
	//}

	//嵌套if语句

	if (score >= 90)
	{
		if (m >= 6)
		{
			cout << "恭喜你考上清华美院" << endl;
		}
		else
		{
			cout << "您的美术科目不及格" << endl;
		}
	}
	else
	{
		cout << "您的文科分数不达标" << endl;
	}


	return 0;
}