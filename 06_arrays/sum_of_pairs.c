// File: sum_of_pairs.c
// Topic: 1D Arrays, Array Operations
// Category: Arrays
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include <stdio.h>

int main()
{
    int a = 12;
    int count = 0;
    int mm[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    for (int i = 0; i <= 7; i++)
    {
        for (int j = i + 1; j <= 7; j++)
        {
            if (mm[i] + mm[j] == a)
            {
                count++;
                printf("(%d ,%d)", mm[i], mm[j]);
            }
        }
    }

    return 0;
}