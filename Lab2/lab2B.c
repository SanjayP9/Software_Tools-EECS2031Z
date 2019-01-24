/***************************************
* EECS2031 – Lab2 *
* Author: Paraboo, Sanjay *
* Email: sanjayp@my.yorku.ca *
* EECS_num: sanjayp *
* York Student #: 215014947 *
****************************************/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c >= 97 && c <= 122)
        {
            c = c - 32;
        }
        
        putchar(c);
    }
    return 0;
}
