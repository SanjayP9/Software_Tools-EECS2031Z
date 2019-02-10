/***************************************
* CSE2031Z – Lab4 *
* Filename: leap.c *
* Author: Paraboo, Sanjay *
* Email: sanjayp@my.yorku.ca *
* eecs_username: sanjayp *
* York num: 215014947
****************************************/

int isLeap(int year)
{
  if (year % 400 == 0)
  {
    return 1;
  }
  else if (year % 100 == 0)
  {
    return 0;
  }
  else if (year % 4 == 0)
  {
    return 1;
  }
  return 0;
}
