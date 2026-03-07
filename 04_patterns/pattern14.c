// File: pattern14.c
// Topic: Nested loops, Star/Number patterns
// Category: Patterns
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){

int a;
printf("enter num");
scanf("%d" , &a);
int m;
for (int i = 1; i <= a; i++)  //this code is to only start with 1
{
// if (i%2==0)
// {
//     m=1;                 do this or just put m=1;
// }else{
//     m=1;
// }
m=1;

    for (int j = 1; j <= i; j++)
    {
        printf("%d" , m);
    
    if (m==0)
    {
        m=1;
    }else{
        m=0;
    }
    
    }

    printf("\n");
}

    return 0;

}