#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    float summa, skidka;

    cout << "Вычисление стоимости покупки с учетом скидки." << std::endl;
    cout << "Введите сумму покупки и нажмите <Enter> => ";
    cin >> summa;

    if (summa > 1000)
    {
        cout << "Вам предоставляется скидка 10%" << std::endl;
        cout << "Сумма покупки с учетом скидки: " << summa-summa * 0.1 << " руб.";
    } else {
        cout << "Сумма покупки: " << summa << " руб.";
    }    

}