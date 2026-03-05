//Write a program to check whether a number is divisible by 97 or not. 
#include<stdio.h>

int main(){

int a = 97;
int b;
printf("Enter number : ");
scanf("%d" , &b);

printf("The remainder after dividing %d with 97 is : %d" , b ,  a%b);
    return 0;
}
/*
another way to do it

#include<stdio.h>
int main(){

int a = 74394;
printf("The remainder is: %d" ,  a%97);
    return 0;
}

*/