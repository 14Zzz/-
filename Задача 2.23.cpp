#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float n, a, max;
	int i = 2, t = 1;
	cin >> n;
	max = sin(n + 1 / n);
	while (i <= n)
	{
		a = sin(n + i / n);
		if (a > max)
		{
			max = a;
			t = 1;
		}
		else if (a == max)
		{
			t += 1;
		}
		i++;
	}
	cout << "Мах: " << max << endl;
	cout << "Количество Max = " << t << endl;
}
