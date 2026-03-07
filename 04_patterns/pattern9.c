// File: pattern9.c
// Topic: Nested loops, Star/Number patterns
// Category: Patterns
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){

int a;
printf("Enter num : ");
scanf("%d" , &a);

for (int i = 1; i <=a; i++){
    
    for (int j = 1; j <= a; j++)
    {
        if (j==(a+1)/2 || i==(a+1)/2)
        {
            printf(" * ");
        }else{
            printf("   ");
        }
        
    }
    printf("\n");
}


    return 0;

}
