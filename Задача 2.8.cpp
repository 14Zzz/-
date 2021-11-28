#include<iostream>
using namespace std;

int main()
{
	int j, n, i;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		for (j = i; j > 0; j--)
		{
			cout << "* ";
		}
		cout << endl;
	}
}
