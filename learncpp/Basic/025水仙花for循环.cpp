#include <iostream>

using namespace std;

int main25()
{
	int i;
	int ge, shi, bai,sum;

	for (i = 100; i < 1000; i++)
	{
		ge = i % 10;
		shi = i / 10 % 10;
		bai = i / 100 % 10;
		sum = ge * ge * ge + shi * shi * shi + bai * bai * bai;
		if (sum == i)
		{
			cout << i << endl;
		}
	}

	return 0;
}