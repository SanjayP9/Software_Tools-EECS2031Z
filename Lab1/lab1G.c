/***************************************
* EECS2031Z Lab1 *
* Filename: lab1G.c *
* Author: Paraboo, Sanjay *
* Email: sanjayp@my.yorku.ca *
* EECS_username: sanjayp *
* York Student #: 215014947 * 
****************************************/
#include <stdio.h>

/* copy the user input to output */

int main()
{

  int c;
  int count, count2 = 0;

  while ((c = getchar()) != EOF)
  {
    if (c != '\n')
    {
      ++count;
    }
    else
    {
      ++count2;
    }
  }

  printf("# of chars: %d\n# of lines: %d\n", count, count2);

  return 0;
}