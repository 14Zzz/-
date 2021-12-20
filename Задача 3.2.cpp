#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int j, p, i, a[5], min, tmp;
	cout<<"Введите 5 элементов массива: ";
	for (i = 0; i < 5; i++)
	{
		cin >> tmp;
		a[i] = tmp;
	}
	for (i = 0; i < 5 - 1; i++)
	{
		min = i;
		for (j = i + 1; j < 5; j++)
		{
			if (a[j] < a[min])
			{
				min = j;
			}
		}
		tmp = a[min];
		a[min] = a[i];
		a[i] = tmp;
	}
	for (i = 0; i < 5; i++)
	{
		cout << a[i];
	}
}
