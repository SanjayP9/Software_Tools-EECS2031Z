/***************************************
* EECS2031 – Lab3 *
* Author: Paraboo, Sanjay *
* Email: paraboosanjay@gmail.com *
* eecs_username: sanjayp *
* york_num: 215014947 *
****************************************/

#include <stdio.h>

int count, sum, currentInput;
double average;

void runningAverage(void)
{
    sum += currentInput;
    count++;
    average = (sum * 1.0f) / (count * 1.0f);
}
