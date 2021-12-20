#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float x, r, l, xPrev;
	double Lamda = -1.0 / 20.0, eps = 0.000001;
	x = 2;
	xPrev = 0;
	while (abs(x - xPrev) > eps)
	{
		xPrev = x;
		x = Lamda * (pow(xPrev, 3) - xPrev - 1) + xPrev;
	}
	cout << "Корень: " << x << endl;
}
