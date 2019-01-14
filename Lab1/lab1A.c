/***************************************
* EECS2031Z Lab1 *
* Filename: lab1A.c *
* Author: Paraboo, Sanjay *
* Email: sanjayp@my.yorku.ca *
* EECS_username: sanjayp *
* York Student #: 215014947 * 
****************************************/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int day, month, year;

    printf("Enter month, day and year seperated by spaces:\n");

    scanf("%d %d %d", &month, &day, &year);

    printf("The input '%d %d %d' is reformatted as %d/%d/%d and %d-%d-%d\n", month, day, year, year, month, day, year, month, day);

    return 0;
}