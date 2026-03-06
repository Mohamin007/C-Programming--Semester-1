//9. Write a program to calculate the factorial of a given number using a for loop.
#include<stdio.h>

int main(){

int fact=1;
int i=8;
while (i>=1){

fact=fact*i;
i--;
}
   printf("The factorial is %d\n" , fact);



    return 0;

}