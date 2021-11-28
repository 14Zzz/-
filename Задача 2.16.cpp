#include<iostream>
using namespace std;

int main()
{
 int z, n, s, i;
 cout « "Введите кол-во слагаемых: ";
 cin » n;
 for (i = 1; i <= n; i++)
 {
  if (i % 2 == 0)
  {
   s += i;
  }
  else 
  {
   s -= i;
  }
 }
 cout « "Сумма слагаемых = " « s « endl;
 cout « "Введите число для поиска суммы чисел последовательности кратных ему: ";
 s = 0;
 cin » z;
 for (i = n / z; i >= 0; i--)
 {
  s += z * i;
 }
 cout « "Сумма кратных чисел = " « s;
}
