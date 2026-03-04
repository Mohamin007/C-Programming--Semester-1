// File: simple_interest.c
// Topic: Variables, Data Types, Operators, Basic I/O
// Category: Basics
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){

int principle = 20000;
int time = 2;
int roi = 10;
int si;

printf("your interest in %d years of %d principle with %d rate of interest will be : %d\n " , time , principle , roi, si = (principle * time* roi) / 100 );

    printf("Your Principle :");
    scanf("%d" , &principle);

    printf("Your time :");
    scanf("%d" , &time);

    printf("Your rate of interest :");
    scanf("%d" , &roi );

    printf("Your Simple ineterst will be : %d" , si = (principle * time* roi) / 100 );

    return 0;
}