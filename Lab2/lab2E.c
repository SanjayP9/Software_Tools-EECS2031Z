/***************************************
* EECS2031 – Lab2 *
* Author: Paraboo, Sanjay *
* Email: sanjayp@my.yorku.ca *
* EECS_num: sanjayp *
* York Student #: 215014947 *
****************************************/

#include <stdio.h>

int isLeap(int year);

int main(int argc, char *argv[])
{
    int year;

    while (1)
    {
        printf("Enter a year: ");
        scanf("%d", &year);

        if (year < 0)
        {
            return 0;
        }

        printf("Year %d is ", year);
        if (!isLeap(year))
        {
            printf("not ");
        }
        printf("a leap year\n\n");
    }
    return 0;
}

int isLeap(int year)
{
    if (year % 400 == 0)
    {
        return 1;
    }
    else if (year % 100 == 0)
    {
        return 0;
    }
    else if (year % 4 == 0)
    {
        return 1;
    }
    return 0;
}