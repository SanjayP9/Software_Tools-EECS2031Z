/***************************************
* EECS2031 – Lab3 *
* Author: Paraboo, Sanjay *
* Email: paraboosanjay@gmail.com *
* eecs_username: sanjayp *
* york_num: 215014947 *
****************************************/
#include <stdio.h>
#include <math.h>

#define SIZE 20

int isPalindrome(char str[]);
int isQuit(char str[]);

int main(int argc, char *argv[])
{
    char inputString[SIZE] = {};

    while (1)
    {
        scanf("%s", &inputString);

        if (isQuit(inputString) == 1)
        {
            return 0;
        }

        int i;
        for (i = sizeof(inputString); i >= 0; i--)
        {
            if (((int)inputString[i]) > 0)
            {
                printf("%c", inputString[i]);
            }
        }

        if (isPalindrome(inputString) == 1)
        {
            printf("\nIs a palindrome\n\n");
        }
        else
        {
            printf("\nIs not a palindrome\n\n");
        }

        for (i = 0; i < sizeof(inputString); ++i)
            inputString[i] = 0;
    }
    return 0;
}

int isPalindrome(char str[])
{
    int i, stringLength = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        stringLength++;
    }

    if (stringLength > 1)
    {
        for (i = 0; i < stringLength / 2; i++)
        {
            if (str[i] != str[stringLength - i - 1])
            {
                return 0;
            }
        }
    }
    return 1;
}

int isQuit(char str[])
{
    if (str[0] == 'q' && str[1] == 'u' && str[2] == 'i' && str[3] == 't' && str[4] == '\0')
    {
        return 1;
    }
    return 0;
}