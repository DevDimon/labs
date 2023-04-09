#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main(void)
{
    string s, digits = "0123456789", out = "";
    int i, j;
    bool flag;

    cout << "Введите строку: ";
    getline(cin, s);

    if (s.empty())
        cout << "Строка пустая\n";
    else
    {
        for (i = 0; i < s.length(); i++)
        {
            flag = false;
            for (j = 0; j < digits.length(); j++)
            {
                if (s[i] == digits[j])
                {
                    flag = true;
                    break;
                }
            }
            if (flag == false)
            {
                out = out + s[i];
            }
        }
        cout << "Строка без цифр: " << out;
    }
}