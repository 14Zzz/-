#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int n, i, tmp;
    bool answerFound = false;

    cout << "Введите длину последовательности:\n";
    cin >> n;
    i = 1;

    cin >> tmp;
    if (tmp == 0)
    {
        while (i <= n && !answerFound)
        {
            cin >> tmp;
            if (tmp == 0)
            {
                i++;
            }
            else
            {
                if (tmp > 0)
                {
                    answerFound = true;
                }
            }
        }
    }
    else
    {
        if (tmp > 0)
        {
            answerFound = true;
        }
    }

    if (answerFound)
    {
        cout << "Сначала ввели положительное число";
    }
    else
    {
        cout << "Сначала ввели отрицательное число";
    }
}
