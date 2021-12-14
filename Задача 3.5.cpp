#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int a[7], count = 1, max;
    for (int i = 0; i < 7; i++)
    {
        cout << "Введите 7 элементов массива: ";
        cin >> a[i];
    }
    max = a[0];
    for (int i = 0; i < 7; i++) 
    {
        if (a[i] > max) 
        {
            max = a[i];
            count = 1;
        }
        else if (a[i] == max) 
        {
            count++;
        }
    }
    cout << "Максимальный элемент: " << max << endl;
    cout << "Колво max: " << count << endl;
}
