#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int max, min, a[5];
	cout << "Введите 5 элементов массива: ";
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	max = min = a[0];
	for (int i = 0; i < 5; i++) 
	{
		if (a[i] > max) 
		{
			max = a[i];
		}
		else if (a[i] < min)
		{
			min = a[i];
		}
	}
	cout << "Максимальный элемент массива: " << max << endl;
	cout << "Минимальный элемент массива: " << min << endl;
}
