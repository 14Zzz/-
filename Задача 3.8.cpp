#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int i, s, a[5];
	bool vozrastaut = true;
	cout << "Введите 5 элементов массива: ";
	for (i = 0; i < 5; i++)
	{
		cin >> s;
		a[i] = s;
	}
	for (i = 0; i < 5 / 2; i++)
	{
		//swap переменных
		s = a[i];
		a[i] = a[5 - i - 1];
		a[5 - i - 1] = s;
	}
	for (i = 0; i < 5; i++)
	{
		cout << a[i];
	}
}
