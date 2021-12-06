#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int tmp, next;
	bool flag = true;
	cin >> tmp;
	while (tmp != 0)
	{
		cin >> next;
		if (tmp > next && next != 0)
		{
			flag = false;
		}
		tmp = next;
	}
	if (flag)
	{
		cout << "Последовательность упорядочена по возрастанию" << endl;
	}
	else
	{
		cout << "Последовательность не упорядочена" << endl;
	}
}
