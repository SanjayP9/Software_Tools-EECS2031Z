/***************************************
* EECS2031 – Lab2 *
* Author: Paraboo, Sanjay *
* Email: sanjayp@my.yorku.ca *
* EECS_num: sanjayp *
* York Student #: 215014947 *
****************************************/

#include <stdio.h>

#define SIZE 10

int main(int argc, char *argv[])
{
    int c;
    int count[SIZE] = {};
    int temp;

    while ((c = getchar()) != EOF)
    {
        temp = c - '0';
        if (temp >= 0 && temp <= 9)
        {
            count[(int)temp] = count[(int)temp] + 1;
        }
    }

    int i;
    for (i = 0; i < SIZE; ++i)
    {
        printf("%d: %d\n", i, count[i]);
    }

    return 0;
}