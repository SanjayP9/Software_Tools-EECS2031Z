/***************************************
* EECS2031Z Lab1 *
* Filename: lab1F.c *
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
  int count = 0;

  while ((c = getchar()) != EOF)
  {
    if (c != '\n')
      ++count;
  }

  printf("# of chars: %d\n", count);

  return 0;
}