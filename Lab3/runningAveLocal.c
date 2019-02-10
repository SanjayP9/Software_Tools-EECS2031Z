/***************************************
* EECS2031 – Lab3 *
* Author: Paraboo, Sanjay *
* Email: paraboosanjay@gmail.com *
* eecs_username: sanjayp *
* york_num: 215014947 *
****************************************/

#include <stdio.h>

#define MY_PRINT(x, y, z) printf("running average is %d / %d = %.3f\n", x, y, z)

double r_avg(int, int);
double runningAverage(int currentSum, int inputCount);

int main(int argc, char *argv[])
{

    int input;
    int count = 1;
    int sum = 0;
    double resu;

    printf("enter number (-1 to quit):  ");
    scanf("%d", &input);
    sum += input;

    while (input != -1)
    {
        resu = runningAverage(sum, count);
        MY_PRINT(sum, count, resu);

        /* read again */
        printf("enter number (-1 to quit):  ");
        scanf("%d", &input);

        count++;
        sum += input;
    }

    return 0;
}

double r_avg(int sum, int count)
{
    return 0;
}

double runningAverage(int currentSum, int inputCount)
{
    return ((currentSum * 1.0f) / inputCount * 1.0f);
}