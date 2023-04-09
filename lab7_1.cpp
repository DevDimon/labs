#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main(void)
{
    string s, out = "";
    int i, j;
    bool flag;

    cout << "Введите строку: ";
    getline(cin, s);

    if (s.empty())
        cout << "Строка пустая\n";
    else
    {
        for (i = 1; i < s.length(); i++)
        {
            if (s[i] == s[i - 1])
            {
                flag = false;
                for (j = 0; j < out.length(); j++)
                {
                    if (out[j] == s[i])
                    {
                        flag = true;
                        break;
                    }
                }
                if (flag == false)
                {
                    out = out + s[i] + " ";
                }
                i++;
            }
        }
        cout << "Удвоенные буквы - " << out;
    }
}