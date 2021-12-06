#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float n, a, max;
	int i = 2, posFirst = 1, posLast = 1;
	cin >> n;
	max = sin(n + 1 / n);
	while (i <= n)
	{
		a = sin(n + i / n);
		if (a > max)
		{
			max = a;
			posFirst = i;
			posLast = i;
		}
		else if (a == max)
		{
			posLast = i;
		}
		i++;
	}
	cout << "Мах: " << max << endl;
	cout << "Первый элемент с этим значением: " << posFirst << endl;
	cout << "Последний элемент с этим значением: " << posLast << endl;
}
