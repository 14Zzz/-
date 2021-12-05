#include<iostream>
using namespace std;

int main()
{
	int n, i, j;
	float x, y, p, fact, sum;
	cin >> n >> x;
	sum = 1 + x;
	fact = 1;
	for (i = 2; i <= n; i++)
	{
		p = 1;
		for (j = 1; j <= i; j++)
		{
			p *= x;
		}
		fact *= i;
		sum += p / fact;
	}
	cout << sum << endl;
}
