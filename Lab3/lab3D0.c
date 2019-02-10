#include <stdio.h>

#define SIZE 10

extern int x,y; // declare gloal variables, which are defined somewhere else
void func1();  // declare function, which are defined somewhere else


void aFun(void); // declare function, which are defined later

int main(int argc, char *argv[])
{

    y=10;
    func1();

    printf("%d %d\n", x,y);
  
  
    int k;
    printf("k: %d\n",k );
    for(k=0; k<SIZE; k++)
       aFun();

    printf("counter: %d\n", counter);  
    return 0;
}

 void aFun(void){
    static int counter=100;
    
    printf("aFun called, counter is %d\n", counter);
    
    counter +=10;

 }
