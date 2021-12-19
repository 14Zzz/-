#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "rus");
    int tmp, s, a[5];
    cout << "Введите 5 элементов массива: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> s;
        a[i] = s;
    }
    for (int j = 1; j < 5; j++) 
    {
        tmp = a[j];
        int i = j - 1;
        while (i >= 0 && a[i] > tmp) 
        {
            a[i + 1] = a[i];
            i--;
        }
        a[i + 1] = tmp;
    }
    for (int j = 0; j < 5; j++) 
    {
        cout << a[j] << " ";
    }
}
