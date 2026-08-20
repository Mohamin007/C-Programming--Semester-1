// File: tower_of_hanoi.c
// Topic: Recursion, Base Case, Recursive Functions
// Category: Recursion
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>
void toh(int x, char from, char to, char aux){
    if (x==1)
    {
        printf("Move disc 1 from %c to %c\n", from, to);
        return;
    }
    toh(x-1,from,aux,to);
    printf("Move disc %d from %c to %c\n",x,from, to );
    toh(x-1,aux,to,from);
}
int main() {
    int n;
    printf("num of discs: ");
    scanf("%d", &n);
    toh(n, 'a', 'c','b' );
    return 0;
}