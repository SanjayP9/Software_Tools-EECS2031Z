/***************************************
* EECS2031 – Lab3 *
* Author: Paraboo, Sanjay *
* Email: paraboosanjay@gmail.com *
* eecs_username: sanjayp *
* york_num: 215014947 *
****************************************/

#include <stdio.h>

#define MY_PRINT(x, y, z) printf("running average is %d / %d = %.3f\n", x, y, z)

double runningAverage(int currentInput);

static int sum;
static int count;

int main(int argc, char *argv[])
{
    double resu;
    int currentInput;

    while (1)
    {
        printf("enter number (-1 to quit):  ");
        scanf("%d", &currentInput);

        if (currentInput == -1)
        {
            break;
        }

        resu = runningAverage(currentInput);
        MY_PRINT(sum, count, resu);
    }

    return 0;
}

double runningAverage(int currentInput)
{
    sum += currentInput;
    count++;
    return (sum * 1.0f) / (count * 1.0f);
}