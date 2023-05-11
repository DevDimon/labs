#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>

using namespace std;

struct carItem
{
    string brand;
    int power;
    int maxSpeed;
    int mass;
    string kuzov;
    int volume;
    int price;
};

int main(void)
{
    carItem cars[2];
    string input;
    int max = 0;

    while (true)
    {
        cout << "Введите название автомобиля (enter для завершения)\n";
        getline(cin, cars[0].brand);
        if (cars[0].brand.empty())
        {
            break;
        }
        else
        {
            cout << "Мощность\n";
            getline(cin, input);
            cars[0].power = stoi(input);
            cout << "Максимальная скорость\n";
            getline(cin, input);
            cars[0].maxSpeed = stoi(input);
            cout << "Масса\n";
            getline(cin, input);
            cars[0].mass = stoi(input);
            cout << "Вид кузова\n";
            getline(cin, cars[0].kuzov);
            cout << "Рабочий объём цилиндра\n";
            getline(cin, input);
            cars[0].volume = stoi(input);
            cout << "Цена\n";
            getline(cin, input);
            cars[0].price = stoi(input);

            if (cars[0].maxSpeed > max)
            {
                max = cars[0].maxSpeed;
                cars[1] = cars[0];
            }
        }
    }
    printf("Технические характеристики автомобиля марки %s, с максимальной скоростью (%d)\n Мощность двигателя - %d, Масса - %d, Вид кузова - %s, Рабочий объём цилиндра - %d, Цена - %d",
           cars[1].brand.c_str(), cars[1].maxSpeed, cars[1].power, cars[1].mass, cars[1].kuzov.c_str(), cars[1].volume, cars[1].price);
}