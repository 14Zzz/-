#include <iostream>
using namespace std;

int main()
{
	float a, b, c, x;
	cin >> a >> b >> c;
	if (a >= b)
		x = a;
	else
		x = b;
	if (c > x)
		x = c;
	cout << x;
}
