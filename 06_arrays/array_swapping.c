// File: array_swapping.c
// Topic: 1D Arrays, Array Operations
// Category: Arrays
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>
void swap(int x[]){
int temp = x[0];
x[0] = x[1];
x[1] = temp;
}
int main() {
    int arr[2] = {1,2};
    printf("%d,%d\n" , arr[0], arr[1]);
    swap(arr);
    printf("%d,%d\n" , arr[0], arr[1]);
    return 0;
}