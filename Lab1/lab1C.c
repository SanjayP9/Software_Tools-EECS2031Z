/***************************************
* EECS2031Z Lab1 *
* Filename: lab1C.c *
* Author: Paraboo, Sanjay *
* Email: sanjayp@my.yorku.ca *
* EECS_username: sanjayp *
* York Student #: 215014947 * 
****************************************/
#include <stdio.h>

float sum(float i, float j);

int main()
{
   printf("Enter two float numbers seperated by ##: ");
   float x, y;
   scanf("%f##%f", &x, &y);

   float su = sum(x, y);
   printf("%f and %f = %f\n", x, y, su);

   return 0;
}

/* function definition */
float sum(float i, float j)
{
   return i + j;
}