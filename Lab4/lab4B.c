/***************************************
* CSE2031Z – Lab4 *
* Filename: lab4B.c *
* Author: Paraboo, Sanjay *
* Email: sanjayp@my.yorku.ca *
* eecs_username: sanjayp *
* York num: 215014947
****************************************/

#include <stdio.h>
#include <math.h> /* for pow() */
#include <string.h>

#define SIZE 10

int my_atoi(char c[]); /* function declaration */

int main()
{
  int a, b;
  char arr[SIZE];

  printf("Enter a postive number or 'quit': ");
  scanf("%s", arr);

  while (strcmp(arr, "quit") != 0)
  {
    printf("%s\n", arr);

    a = atoi(arr);
    printf("atoi:    %d (%#o, %#X)\t%d\t%.0f\n", a, a, a, a * 2, pow(a, 2));

    b = my_atoi(arr);
    printf("my_atoi: %d (%#o, %#X)\t%d\t%.0f\n", a, a, a, a * 2, pow(a, 2));

    /* read again */
    printf("Enter a postive number or 'quit': ");
    scanf("%s", arr);
  }

  return 0;
}

/* convert an array of digit characters into a decimal int */

/* textbook did scan from left to right.
 Here you should scan from right to left. This is a little complicated but more straightforward */

int my_atoi(char c[])
{
  int result = 0;
  int i = 0;

  for (i = 0; i < strlen(c); i++)
  {
    //result += (int)(pow((double)((c[strlen(c) - i] - '0')), i));
  }

  return result;
}
