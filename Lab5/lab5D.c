/***************************************
* CSE2031 – Lab 5 *
* Author: Paraboo, Sanjay *
* Email: sanjayp@my.yorku.ca *
* eecs_num: sanjayp *
* Yorku #: 215014947
****************************************/

#include <stdio.h>
#include <string.h>

#define SIZE 40

void sortArray(char *);
void swap(char *, char *);

int main()
{
    char arr[SIZE];
    char result[SIZE];

    fgets(arr, SIZE, stdin);
    while(strcmp(arr, "quit\n")!=0)
    {
        arr[strlen(arr)-1] = '\0';

        sortArray(arr);
        printf("%s\n\n", arr);

        fgets(arr,SIZE,stdin);
    }
    return 0;
}

void swap (char * a, char * b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void sortArray(char * arr)
{
    int length = 0;
    
    while (*(arr+length) != '\0')
    {
      length++;
    }

    int i = 0;
    int j = 0;
    char * smallest;

    for (i = 0; i < length;i++)
    {
        smallest = arr + i;

        for (j = i+1; j < length;j++)
        {
            if (*(arr+j) < *(smallest))
            {
                smallest = arr + j;
            }
        }
        swap(smallest, arr+i);
    }
}