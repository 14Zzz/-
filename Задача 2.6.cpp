#include<iostream>
using namespace std;

int main()
{
	int j, n, i;
	cin >> n;
	for (i = n; i > 0; i--)
	{
		for (j = n; j - i > 0; j--)
		{
			cout << " ";
		}
		for (j = i; j > 0; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
}
