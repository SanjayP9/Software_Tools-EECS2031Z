/***************************************
* EECS2031 – Lab3 *
* Author: Paraboo, Sanjay *
* Email: paraboosanjay@gmail.com *
* eecs_username: sanjayp *
* york_num: 215014947 *
****************************************/

#include <stdio.h>

#define MY_PRINT(x, y, z) printf("running average is %d / %d = %.3f\n", x, y, z)

extern int count, sum, currentInput;
extern double average;
void runningAverage();

int main(int argc, char *argv[])
{
     while (1)
    {
        printf("enter number (-1 to quit):  ");
        scanf("%d", &currentInput);

        if (currentInput == -1)
        {
            break;
        }

        runningAverage(currentInput);
        MY_PRINT(sum, count, average);
    }

    return 0;
}