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
		s *= 10;
		x = x / 10;
	}
	cout << "Обратное число: " << s / 10;
}
