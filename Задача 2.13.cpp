#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double D, x, x1, x2, a, b, c;
	cout << "Введите коэфиценты a, b и c: ";
	cin >> a >> b >> c;
	D = pow(b, 2) - 4 * a * c;
	if (D == 0)
	{
		cout << "Корней нет";
	}
	if (D > 0)
	{
		x1 = (-b - sqrt(D)) / (2 * a);
		x2 = (-b + sqrt(D)) / (2 * a);
		cout << "x1 = " << x1 << " x2 = " << x2;
	}
	if (D < 0)
	{
		x = -b / (2 * a);
		cout << "x = " << x;
	}
}
