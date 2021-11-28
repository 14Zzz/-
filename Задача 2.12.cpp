#include<iostream>
using namespace std;

int main()
{
 int n, i,max, j, min;
 cout << "Введите количество элементов массива: ";
 cin >> n;
 cout << "Последовательно введите элементы массива: ";
 cin >> j;
 max = min = j;
 for (i = n - 1; i > 0; i--)
 {
  cin >> j;
  if (j > max)
  {
   max = j;
  }
  if (j < min)
  {
   min = j;
  }
 }
 cout << "Сумма min и max = " << max + min;
}
