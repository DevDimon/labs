#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main(void)
{
    string s, maxLen = "", minLen = "", count = "";
    int i;

    cout << "Введите строку: ";
    getline(cin, s);
    s = s + ' ';

    if (s.empty())
        cout << "Строка пустая\n";
    else
    {
        for (i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ')
            {
                count = count + s[i];
            }
            else
            {
                if (count.length() > maxLen.length())
                {
                    maxLen = count;
                }
                if (count.length() < minLen.length() || minLen.length() == 0)
                {
                    minLen = count;
                }
                count = "";
            }
        }
        cout << "Самое длинное слово - " << maxLen << "\n";
        cout << "Самое короткое слово - " << minLen;
    }
}