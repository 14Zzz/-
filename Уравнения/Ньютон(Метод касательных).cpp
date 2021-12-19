#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float x, xPrev;
	double eps = 0.000001;
	// f(x) = x ^ 3 -x -1
	// f'(x) = 3 * x ^ 2 - 1
	// f''(x) = 6 * x
	// [1, 2]
	// f(b) * f"(b) > 0, если а > 0, то так же с а
	// 8 - 2 - 1 * 6 * 2 > 0, х0 = а
	x = 2;
	xPrev = 0;
	while (abs(x - xPrev) >= eps)
	{
		xPrev = x;
		x = (xPrev - (pow(xPrev, 3) - xPrev - 1) / (3 * pow(xPrev, 2) - 1));
	}
	cout << "Корень: " << x << endl;
}
