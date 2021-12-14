#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int a[5];
	bool yporadochen = true;
	cout << "Введите 5 элементов массива: ";
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	for (int i = 4; i > 0; i--) 
	{
		if (a[i] < a[i - 1]) 
		{
			yporadochen = false; 
		}
	}
	if (yporadochen)
	{
		cout << "Массив упорядочен по возрастанию" << endl;
	}
	else 
	{
		cout << "Массив не упорядочен по возрастанию" << endl;
	}
}
