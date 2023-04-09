#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main(void)
{
    string s, vowels = "aeiou", out = "";
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
            for (j = 0; j < vowels.length(); j++)
            {
                if (s[i] == vowels[j])
                {
                    flag = true;
                    break;
                }
            }
            if (flag == true)
            {
                s[i] = '*';
            }
        }
        cout << "Строка с заменой гласных: " << s;
    }
}