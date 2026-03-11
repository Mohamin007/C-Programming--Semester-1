// File: sum_difference.c
// Topic: 1D Arrays, Array Operations
// Category: Arrays
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main() {
    int a;
    int sumeven = 0;
    int sumodd = 0;
int arr [4] ={2,3,4,6};
    for (int i = 0; i <= 3; i++)
    {
        if (i%2==0)
        {
            sumeven+=arr[i];
        }
        else
        {
            sumodd+=arr[i];
        }
    }
printf("%d " , sumeven-sumodd );
    return 0;
}