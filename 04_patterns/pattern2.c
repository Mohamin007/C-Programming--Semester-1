// File: pattern2.c
// Topic: Nested loops, Star/Number patterns
// Category: Patterns
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){

int r;
int c;
printf("Enter number of rows : ");
scanf("%d" , &r);
// printf("Enter number of columns : ");
// scanf("%d" , &c);
//smjho ab

for (int i = 1; i<=r; i++){  //              here in for loop, i is 1, then is i less or equal to r? lets say r is 3
    for (int j = 1; j <=i; j++){         //then yes i is < 3, then it goes to 2nd for loop, where j is 1, is j< or = i
        printf("* ");       // yes,   so it prints *, then \n, the goes to 1st for loop, here i is 2 now, is 2<=3, yes 
    }                    //then goes to 2nd loop here j is 1, not 2....then is j<=2? yes
    printf("\n");        //it prints *, but now j becomes 2 now in the same line, as now j++ comes in play.
}                        //is 2<=2? yes, so second star prints and then \n prints, now loop goes again to 1st loop
                        // i becomes 3, is 3<=3? yes, goes to seconf=d loop, now j is 1, is 1<=3? yes, * is printed 
    return 0;           //now j is 2, is 2<=3? yes, 2nd * prints, now j is 3, is 3<=3? yes, 3rd * prints and then \n
}                       // now loop goes to 1st loop, is 4<=3? no.  loop breaks.