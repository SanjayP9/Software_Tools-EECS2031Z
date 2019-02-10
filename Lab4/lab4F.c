/***************************************
* CSE2031Z – Lab4 *
* Filename: lab4F.c *
* Author: Paraboo, Sanjay *
* Email: sanjayp@my.yorku.ca *
* eecs_username: sanjayp *
* York num: 215014947
****************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int age = 10;
int age2 = 100;
int* ptr = &age;
int* ptr2 = &age2;

int main()
{
    printf("%d %d\n", age, *ptr);
    *ptr = 14;
    printf("%d %d\n", age, *ptr);
    *ptr2 = *ptr;
    printf("%d %d\n", age2, *ptr2);
    ptr2 = ptr;
    *ptr2 -=1;
    printf("%d %d %d\n", age, *ptr, *ptr2);
    printf("%p %p %p\n",&age,ptr,ptr2);

}