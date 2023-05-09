#include <stdio.h>
#include <string.h>

#define MAXN 25
#define EMPTY_STR ""

struct wedItem
{
    char name[15];
    int rate[4];
    float avrg;
};
int main(void)
{
    wedItem wed[MAXN];
    int i = 0, j, imax;
    float max = 0.0, sum;

    printf("Введите фамилию\n");
    while (strcmp(gets(wed[i].name), EMPTY_STR) != 0 && i < MAXN)
    {
        sum = 0;
        printf("Введите оценки \n");
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &wed[i].rate[j]);
            sum += wed[i].rate[j];
        }
        wed[i].avrg = sum / 4.0;

        while (getchar() != '\n')
            ;

        i++;
        if (i < MAXN)
            printf("Введите фамилию\n");
    }
    puts("Ввод данных закончен\n");

    int k = i;
    wedItem tmp;

    for (i = 0; i < k; i++)
    {
        for(j = i; j < k; j++)
        {
            if (wed[j].avrg > max)
            {
                max = wed[j].avrg;
                imax = j;
            }
        }
        tmp = wed[i];
        wed[i] = wed[imax];
        wed[imax] = tmp;
        max = 0; 
    }

    puts("Фамилия            Оценки               Средний балл");
    for (i = 0; i < k; i++)
    {
        printf("%-15s", wed[i].name);
        for (j = 0; j < 4; j++)
        {
            printf("%5d ", wed[i].rate[j]);
        }
        printf("%5.2f\n", wed[i].avrg);
    }
}