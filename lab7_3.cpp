#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main(void)
{
    string s;
    int i, countWords = 0, j;

    cout << "Введите строку: ";
    getline(cin, s);

    if (s.empty())
        cout << "Строка пустая\n";
    else
    {
        for (j = 0; j < s.length(); j++)
        {
            if (s[j] != ' ')
            {
                break;
            }
        }
        for (i = j; i < s.length(); i++)
        {
            if (s[i] == ' ')
            {
                countWords++;
                for (j = i + 1; j < s.length(); j++)
                {
                    if (s[j] == ' ')
                    {
                        i++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        if (s[s.length() - 1] != ' ')
        {
            countWords++;
        }
        cout << "Количество слов - " << countWords;
    }
}