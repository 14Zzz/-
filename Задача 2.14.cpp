#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int s = 0, x;
	cout << "Введите число: ";
	cin >> x;
	while (x > 0)
	{
		s = s + (x % 10);
		x = x / 10;
	}
	cout << "Сумма цифр числа = " << s;
}
