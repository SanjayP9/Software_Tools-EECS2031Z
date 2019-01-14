/***************************************
* EECS2031Z Lab1 *
* Filename: lab1D.c *
* Author: Paraboo, Sanjay *
* Email: sanjayp@my.yorku.ca *
* EECS_username: sanjayp *
* York Student #: 215014947 * 
****************************************/
#include <stdio.h>

float sum(float i, float j);

int main()
{
   printf("Enter the number of interactions: ");

   int count, i;
   scanf("%d", &count);

   for (i = 0; i < count; ++i)
   {
      printf("\nEnter two float numbers seperated by ##: ");
      float x, y;
      scanf("%f##%f", &x, &y);

      float su = sum(x, y);
      printf("%f and %f = %f\n", x, y, su);
   }

   return 0;
}

/* function definition */
float sum(float i, float j)
{
   return i + j;
}