#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	float a, b;
	cout << "Введите делимое и делитель: ";
	cin >> a >> b;
	if (b == 0)
		cout << "На 0 делить нельзя" << endl;
	else
		cout << a / b << endl;
}