// its a tough question, you'll definetely get wrong, answer will be right but method will be wrong
#include<stdio.h>

int main(){

int a= 3;
int b=6;
int c=9;
printf("The value is %d" , 3*b/2*c + 7*a);
/*
we'll do like this
3*b/2*c + 7*a

from left to right

3*6/2*c + 7*a
18/2*c + 7*a
9*c + 7*a
9*9 + 7*a
81 + 7*3
81 + 21
102

*/
    return 0;

}