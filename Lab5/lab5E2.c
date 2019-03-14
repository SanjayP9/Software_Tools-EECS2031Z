/***************************************
* CSE2031 – Lab 5 *
* Author: Paraboo, Sanjay *
* Email: sanjayp@my.yorku.ca *
* eecs_num: sanjayp *
* Yorku #: 215014947
****************************************/

/* Passing an array to a function. */

#include <stdio.h>

#define MAX 20
 

int largest(int * x, int n);
void display(int *arr, int n);

 main(int argc, char *argv[])
 {
     int array[MAX], count;

     /* Input MAX values from the keyboard. */
     int i;  count=0;
     
     while ( scanf("%d", &i) != EOF){
        *(array + count) = i; // store in array[count]
        count++;
     }
     *(array + count) = -1;


      /* Call the function and display the return value. */
      printf("Inputs: ");
      display(array, count);

     
     
     printf("\nLargest value: %d\n", largest(array, count));
     
     return 0;
 }
 
 /* display a int array */

 void display(int *arr, int n)
 {
     int i = 0;
     printf("\n");

     while(i < n)
     {
        printf("%d ", *(arr+i));
        i++;
     }
     printf("\n");
 }


/* Function largest() returns the largest value */
 /* in an integer array */

 int largest(int * arr, int n)
 {
    int i = 0;
    int largest = 0;
     while(i < n)
     {
        if (*(arr + i) > largest)
        {
            largest = *(arr + i);
        }
        i++;
     }
     return largest;
 }

