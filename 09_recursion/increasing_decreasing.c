// File: increasing_decreasing.c
// Topic: Recursion, Base Case, Recursive Functions
// Category: Recursion
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

void version(int x){
if (x==0){return;}      
{
    printf("%d\n" , x);
    version(x-1);   
    printf("%d\n" , x);
}

}

int main(){
int a;
    printf("enter  num:");
    scanf("%d" , &a);

   version (a); 
return 0;
}
