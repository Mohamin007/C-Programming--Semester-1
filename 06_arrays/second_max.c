// File: second_max.c
// Topic: 1D Arrays, Array Operations
// Category: Arrays
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>
#include<limits.h>
int main() {
        
        int arr[7] = {55,2,54,5,99,6,9};
        int smax = INT_MIN , max = INT_MIN;
        for (int i = 0; i < 7; i++)
        {
            if (arr[i]>max)
            {
                max = arr[i];
            }
            
        }    

        for (int i = 0; i < 7; i++)
        {
            if (arr[i] < max && arr[i]< smax)
            {
                smax = arr[i];
            }
            
        }

    printf("largest element is %d\n", max);
    printf("secnond largest element is %d", smax);
    return 0;
}