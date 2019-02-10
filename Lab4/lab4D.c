/***************************************
* CSE2031Z – Lab4 *
* Filename: lab4D.c *
* Author: Paraboo, Sanjay *
* Email: sanjayp@my.yorku.ca *
* eecs_username: sanjayp *
* York num: 215014947
****************************************/

#include <stdio.h>
#include <math.h> 
#include <string.h>

#define SIZE 10
#define SIZE2 40

int main(int argc, char *argv[])
{

      char name[SIZE], wage[SIZE], age[SIZE];
      char resu[SIZE2], resu2[SIZE2], resu3[SIZE2];

      printf("Enter name, age and wage (xxx to quit): ");
      scanf("%s %s %s", name, age, wage);
      
      char newName[SIZE];
      float newWage;
      int newAge;


      while (strcmp(name, "xxx")!=0)
      {
            strcpy(newName, name);
            newName[0] = toupper(newName[0]);
            sscanf(age, "%d", &newAge);
            newAge+=10;
            sscanf(wage, "%f", &newWage);
            newWage*=2;
            sprintf(resu, "%s-%d-%.3f-[%.0f, %.0f]\n", newName, newAge, newWage, floor(newWage), ceil(newWage));
            strcpy(resu2, resu);
            sprintf(resu3, "%s", resu);

            printf("%s%s%s\n", resu, resu2, resu3);

            /* use scanf to read again */
            printf("Enter name, age and wage (xxx to quit): ");
            scanf("%s %s %s", name, age, wage);
      }
      return 0;
}
