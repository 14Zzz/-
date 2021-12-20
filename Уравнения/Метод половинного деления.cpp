#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float a, b, c;
	double eps = 0.000001;
	a = 1;
	b = 2;
	while ((b - a) >= eps)
	{
		c = (a + b) / 2;
		if (((pow(a, 3) - a - 1) * (pow(c, 3) - c - 1)) < 0)
		{
			b = c;
		}
		else if (((pow(b, 3) - b - 1) * (pow(c, 3) - c - 1)) < 0)
		{
			a = c;
		}
		else
		{
			cout << "Ошибка, что то не так!!!" << endl;
		}
	}
	cout << "Корни: " << a << " " << b;
}
