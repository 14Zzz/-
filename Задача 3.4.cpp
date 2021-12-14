#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int a[5], max;
	for (int i = 0; i < 5; i++) 
	{
		cout << "Введите 5 элементов массива: ";
		cin >> a[i];
	}
	max = a[0];
	for (int i = 0; i < 5; i++) 
	{
		if (a[i] > max) 
		{
			max = a[i];
		}
	}
	cout << "Максимальный элемент массива: " << max << endl;
}
