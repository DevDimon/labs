#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main(void)
{
    string s;
    int i, countOpen = 0, countClose = 0;

    cout << "Введите строку: ";
    getline(cin, s);

    if (s.empty())
        cout << "Строка пустая\n";
    else
    {
        for (i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                countOpen++;
            }
            if (s[i] == ')')
            {
                countClose++;
            }
        }
        if (countOpen == countClose)
        {
            cout << "Баланс скобок соблюдается";
        }
        else
        {
            cout << "Баланс скобок не соблюдается";
        }
    }
}