#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int j, p, i, a[5], tmp;
	cout << "Введите 5 элементов массива: ";
	for (i = 0; i < 5; i++)
	{
		cin >> tmp;
		a[i] = tmp;
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5 - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		cout << a[i];
	}
}
