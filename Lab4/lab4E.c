/***************************************
* CSE2031Z – Lab4 *
* Filename: lab4E.c *
* Author: Paraboo, Sanjay *
* Email: sanjayp@my.yorku.ca *
* eecs_username: sanjayp *
* York num: 215014947
****************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define ROWS 20
#define COLUMNS 30

int main(int argc, char *argv[])
{
     char inputs_table[ROWS][COLUMNS];

     char name[COLUMNS];
     int age;
     float wage;
     int i = 0, j = 0;
     
     printf("Enter name age and wage: ");
     scanf("%s %d %f", name, &age, &wage);

     while (strcmp(name, "xxx") != 0)
     {
          sprintf(inputs_table[i], "%s %d %.2f", name, age, wage);
          i += 1;
          for (j = 0; j < strlen(name); j++)
          {
               name[j] = toupper(name[j]);
          }
          
          sprintf(inputs_table[i], "%s %d %.2f", name, age, wage);
          i += 1;
          /* read again  */
          printf("Enter name age and wage: ");
          scanf("%s %d %f", name, &age, &wage);
     }
     printf("\nRecords generated in %s on %s %s\n", __FILE__, __DATE__, __TIME__);
     /* now display the input_table row by row */     

     int k;
     for (k = 0; k < i; k++)
     {
          printf("%s\n", &inputs_table[k]);
     }

     return 0;
}
