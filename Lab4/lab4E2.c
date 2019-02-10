/***************************************
* CSE2031Z – Lab4 *
* Filename: lab4E2.c *
* Author: Paraboo, Sanjay *
* Email: sanjayp@my.yorku.ca *
* eecs_username: sanjayp *
* York num: 215014947
****************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define SIZE 10
#define ROWS 20
#define COLUMNS 30

int main(int argc, char *argv[])
{
     char input_table[ROWS][COLUMNS];

     int current_row;
     char name[SIZE];
     char newName[SIZE];
     int age;
     float wage;

     printf("Enter name age and wage: ");
     fgets(input_table[current_row], 30, stdin); // add a /n
     sscanf(input_table[current_row], "%s %d %f", &name, &age, &wage);
     while (strcmp(name, "xxx") != 0)
     {
          printf("\n\n%s\n\n", name);
          current_row += 1;
          /* need to 'tokenize' the read in line*/    
          int i = 0;
          for (i = 0; i < strlen(name); i++)
          {
               newName[i] = toupper(name[i]);
          }
          age += 10;
          wage *= 1.5f;

          sprintf(input_table[current_row], "%s\n%s %d %.2f", input_table[current_row], newName, age, wage);

          // read again
          printf("Enter name age and wage: ");
          fgets(input_table[current_row], 30, stdin);
          sscanf(input_table[current_row], "%s %d %f", &name, &age, &wage);
     }

     /* now display the input_table row by row */
     printf("\nRecords generated in %s on %s %s\n", __FILE__, __DATE__, __TIME__);

     int k;
     for (k = 0; k < current_row; current_row++)
     {
          printf("%s\n", &input_table[k]);
     }

     return 0;
}
