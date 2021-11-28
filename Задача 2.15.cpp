#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int s, z, x;
	bool Vhodit = false;
	cout << "Введите число: ";
	cin >> x;
	cout << "Введите символ: ";
	cin >> z;
	while (x > 0)
	{
		s = x % 10;
		x = x / 10;
		if (s == z)
		{
			Vhodit = true;
			break;
		}
	}
	if (Vhodit)
	{
		cout << "Входит";
	}
	else
	{
		cout << "Не входит";
	}
}
