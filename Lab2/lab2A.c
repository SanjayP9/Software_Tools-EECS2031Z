/***************************************
* EECS2031 – Lab2 *
* Author: Paraboo, Sanjay *
* Email: sanjayp@my.yorku.ca *
* EECS_num: sanjayp *
* York Student #: 215014947 *
****************************************/

#include <stdio.h>

#define SIZE 32

int isDigit(char c);

int main(int argc, char *argv[])
{
    int n;
    char c;

    while (1)
    {

        printf("Enter an integer and a character seperated by blank>");
        scanf("%d %c", &n, &c);

        if (n == -10000)
        {
            break;
        }

        printf("Character '%c' ", c);

        if (isDigit(c))
        {
            printf("represents a digit. Sum of %d and %c is %d\n\n", n, c, (n + (int)(c - '0')));
        }
        else
        {
            printf("does not represent digit\n\n");
        }
    }
    return 0;
}

int isDigit(char c)
{
    int value = (int)(c - '0');
    return (!(value < 0 || value > 9));
}
