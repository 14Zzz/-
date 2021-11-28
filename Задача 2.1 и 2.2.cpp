#include <iostream>
using namespace std;

int main()
{
	int a, s = 0, p = 1;
	cin >> a;
	while (a > 0)
	{
		s += a;
		p *= a;
		a -= 1;
	}
	cout << s << " " << p;
}
