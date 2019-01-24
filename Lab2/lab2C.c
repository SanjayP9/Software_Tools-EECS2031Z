/***************************************
* EECS2031 – Lab2 *
* Author: Paraboo, Sanjay *
* Email: sanjayp@my.yorku.ca *
* EECS_num: sanjayp *
* York Student #: 215014947 *
****************************************/

#include <stdio.h>
#include <string.h>

#define SIZE 21

int length(char word[]);
int indexOf(char word[], char c);
int isQuit(char word[]);

int main(int argc, char *argv[])
{
    char stringArray[SIZE] = {};
    char c;

    while (1)
    {
        printf("Enter a word and a character seperated by blank: ");
        scanf("%s %c", stringArray, &c);

        if (isQuit(stringArray) == 1)
        {
            break;
        }
        printf("Input word is \"%s\". Contains %d characters. Index of '%c' in it is %d\n\n", stringArray, length(stringArray), c, indexOf(stringArray, c));
    }

    return 0;
}

int length(char word[])
{
    int i = 0;
    while (word[i] != '\0')
        i++;
    return i;
}

int indexOf(char word[], char c)
{
    int i;
    for (i = 0; i < sizeof(word); i++)
    {
        if (word[i] == c)
        {
            return i;
        }
    }
    return -1;
}

int isQuit(char word[])
{
    char quit[SIZE] = "quit";
    int i;
    for (i = 0; quit[i] != '\0' || word[i] != '\0'; i++)
    {
        if (quit[i] != word[i])
        {
            return 0;
        }
    }
    return 1;
}
