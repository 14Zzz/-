#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	float a, b;
	cout << "������� ������� � ��������: ";
	cin >> a >> b;
	if (b == 0)
		cout << "�� 0 ������ ������" << endl;
	else
		cout << a / b << endl;
}