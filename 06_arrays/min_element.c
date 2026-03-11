// File: min_element.c
// Topic: 1D Arrays, Array Operations
// Category: Arrays
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main() {
    int arr [4]= { 10,4,6,2};
    int min = arr[0];
for (int i = 0; i <= 3; i++)
{       
        if (arr[i]< min){
            min = arr[i];
        }
}
printf("max element is %d" , min);

    return 0;
}