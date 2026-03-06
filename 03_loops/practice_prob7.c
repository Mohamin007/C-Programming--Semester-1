//8. Write a program to calculate the factorial of a given number using a for loop.

#include<stdio.h>

int main(){
int fact=1;
for (int i = 10; i>=1; i--)
 fact=fact*i;
{
   
    printf("The factorial is %d " , fact);
}

    return 0;

}