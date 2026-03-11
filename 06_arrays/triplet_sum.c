// File: triplet_sum.c
// Topic: 1D Arrays, Array Operations
// Category: Arrays
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main() {
    int a = 20;
    int count = 0;
    int arr[10] = { 2, 6,10,12,8, 18,4,1,16,7};

for (int i = 0; i<= 9; i++)
{
    for (int j = i+1; j <= 9; j++)
    {
        for (int k = j+1; k <= 9; k++)
        {
            if (arr[i] + arr[j] + arr[k] == a)
            {
                count ++;
                printf("(%d , %d , %d) \n" , arr[i] , arr[j] , arr[k]);
            }
            
        }
           
    }
    
}
printf("%d" , count); 

    return 0;
}