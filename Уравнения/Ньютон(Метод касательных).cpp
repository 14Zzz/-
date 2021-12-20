#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float x, xPrev;
	double eps = 0.000001;
	x = 2;
	xPrev = 0;
	while (abs(x - xPrev) >= eps)
	{
		xPrev = x;
		x = (xPrev - (pow(xPrev, 3) - xPrev - 1) / (3 * pow(xPrev, 2) - 1));
	}
	cout << "Корень: " << x << endl;
}
