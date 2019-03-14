/***************************************
* CSE2031 – Lab 5 *
* Author: Paraboo, Sanjay *
* Email: sanjayp@my.yorku.ca *
* eecs_num: sanjayp *
* Yorku #: 215014947
****************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 40

int isPalindrome (char *);
void printReverse (char *);

int main ()
{   
   int result;  char c; int i;  int count=0;
   char arr[SIZE];
  
   fgets(arr,SIZE,stdin);
   while (strcmp(arr, "quit\n") !=0)
   {
      arr[strlen(arr)-1] = '\0'; // remove the trailing \n
      // print backward
      printReverse(arr);
   
      result = isPalindrome (arr);
      if (result==1) 
         printf ("\nIs a case-insensitive palindrome.\n\n");
      else 
         printf ("\nNot a case-insensitive palindrome.\n\n");
 
      fgets(arr,SIZE,stdin);
    }
    
    return 0;
}


int isPalindrome (char * str)
{
   int length = 0;

   while (*(str+length) != '\0')
   {
      length++;
   }

   char * start = str;
   char * end = str+length-1;
   int i = 0;

   for  (i = 0; i < length; i++)
   {
      if(tolower(*str)!=tolower(*end))
      {
         return 0;
      }
      str++;
      end--;
   }
   return 1;
}

// assume the \n was removed manually
void printReverse(char * str){
  int i = strlen(str) -1;
  while ( i >=0 ){
     printf("%c", *(str+i) );  // or  putchar(*(str+i));
     i--;
  }
}

