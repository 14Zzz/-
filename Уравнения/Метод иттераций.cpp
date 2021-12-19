#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float x, r, l, xPrev;
	double Lamda = -1.0 / 20.0, eps = 0.000001;
	// f(x) = x ^ 3 -x -1
	// f'(x) = 3 * x ^ 2 - 1
	// f''(x) = 6 * x
	// [1, 2]
	// fi(x) = x + l * (x ^ 3 - x - 1)
	// -1/r < l < 0, если f'(x) > 0
	// 0 < l < 1/r, если f'(x) < 0
	// r = max(|f'(a)|, |f'(b)|)
	// l = [-1/11, 0]
	// l = -1/20 = -0.05
	x = 2;
	xPrev = 0;
	while (abs(x - xPrev) > eps)
	{
		xPrev = x;
		x = Lamda * (pow(xPrev, 3) - xPrev - 1) + xPrev;
	}
	cout << "Корень: " << x << endl;
}
