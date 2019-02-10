/***************************************
* CSE2031Z – Lab4 *
* Filename: lab4C.c *
* Author: Paraboo, Sanjay *
* Email: sanjayp@my.yorku.ca *
* eecs_username: sanjayp *
* York num: 215014947
****************************************/

#include <stdio.h>

int countDays(int y, int m, int d);
int isLeap(int year);

int main()
{

  char input[30];
  int i;
  int dates;
  int day, year, month;

  printf("Enter 'month-day year' : ");
  fgets(input, 30, stdin); /* read in the whole line */

  while (strcmp(input, "quit\n") != 0)
  {
    /* manipulate the input, count days and display */
    sscanf(input, "%d-%d %d\n", &month, &day, &year);
    printf("%d days of year %d have elasped\n", countDays(year, month, day), year);

    // read again
    printf("\nEnter 'month-day year': ");
    fgets(input, 30, stdin); /* read in the whole line */
  }

  return 0;
}

int countDays(int y, int m, int d)
{
  int totalDays = 0;
  int i;

  for (i = m - 1; i > 0; i--)
  {
    if (i == 2)
    {
      totalDays += (isLeap(y) == 1) ? (29) : (28);
    }
    else
    {
      totalDays += (i % 2 == 0) ? (30) : (31);
    }
  }
  return totalDays + d;
}
