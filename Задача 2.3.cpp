#include <iostream>
using namespace std;
// (1 * 2) + (2 * 3 * 4) + (3 * 4 * 5 * 6)
int main()
{
	int s, n, i, Sum = 0;
	cin >> n;
	while (n > 0)
	{
		s = 1;
		for (i = n; i < n * 2 + 1; i++)
		{
			s = s * i;
		}
		n -= 1;
		Sum += s;
	}
	cout << Sum;

}
