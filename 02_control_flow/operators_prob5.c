// File: operators_prob5.c
// Topic: if/else, switch-case, Logical Operators
// Category: Control Flow
// Course: Introduction to C Programming — Semester 1, Kashmir University

/*3.0 + 1 will be: 
a. Integer. 
b. Floating point number. 
c. Character.
*/
#include<stdio.h>

int main(){

float a = 3.0 + 1;
printf("The value is %f" , a);
    return 0;

} 
    
//coding will not help here, because if you write int and %d, the answer will be integer 
//and if you write float and %f, the answer will be in float
// so the concept comes in play, where we know, int in operation with float gives always float
// so the above code can be written as
#include<stdio.h>

int main(){
                                               //this code is more useful for understanding
                                               //then the above one
float c = 3.0;
int d = 1;
printf("The value is %f" , c+d);
    return 0;

}