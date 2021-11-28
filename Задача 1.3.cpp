#include <iostream>
using namespace std;

int main()
{
	float a;
	cin >> a;
	if (a < 5)
		cout << a * 3;
	if (a >= 5 && a <= 7)
		cout << a / 10;
	else
		cout << a + 3;

}
