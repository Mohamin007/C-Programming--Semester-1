// File: operators_prob6.c
// Topic: if/else, switch-case, Logical Operators
// Category: Control Flow
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){

int a, b ,c ,d;
printf("Enter your 1st number : ");
scanf("%d", &a);
printf("Enter your 2nd number : ");
scanf("%d", &b);
printf("Enter your 3rd number : ");
scanf("%d", &c);
printf("Enter your 4th number : ");
scanf("%d", &d);

if(a>b&&a>c&&a>d){
    printf("%d is the biggest number" ,a);
}
else if(b>a&&b>c&&b>d){
    printf("%d is the biggest number" ,b);
}
else if(c>a&&c>b&&c>d){
    printf("%d is the biggest number" ,c);
}
else if(d>a&&d>b&&d>c){
    printf("%d is the biggest number" ,d);
}

    return 0;

}