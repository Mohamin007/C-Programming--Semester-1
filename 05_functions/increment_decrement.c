// File: increment_decrement.c
// Topic: Functions, Scope, Parameters
// Category: Functions
// Course: Introduction to C Programming — Semester 1, Kashmir University

/*
i++ and i-- we know already, increases or decreases the value of i by 1
but now, whats ++i and --i
we'll understand by code first then i'll explain
*/
#include<stdio.h>

int main(){

int i=3;           // here simply i = 3 so it prints i is 3
printf("The value of i is %d\n" , i);

i = i + 5;       // here i's value is increased by 5, so i is now 3+5 = 8
printf("The value of i is %d\n" , i);

i++;            // here it increases the value of i by 1 so now i is 9
printf("The value of i is %d\n" , i);

//now
i--;           // i is 9 but i-- decreases by one, so its 8 now
printf("The value of i is %d\n" , i);

//see now
//i++ and ++1 is almost the same but not exactly the same 
//see below

//printf("The value of i is %d\n" , i++); // result gives me 8, not 9 even though I wrote i++

//but if i write

printf("The value of i is %d\n" , ++i); // result give me 9, now understand

/*
i++ means post increment, it prints i first then increments
++i means pre increment, it increment i first then prints

so  when 
int i=7;

printf("The value of i is %d\n" , i++);
it results 7, because i got printed first then increases    
mtlb smjho phrse

int i = 7;
printf("The value of i is %d\n" , i++); ----EQ 1

printf("The value of i is &d\n" , i);  -----EQ 2

shockingly result is

The value of i is 7
The value of i is 8

because in EQ 1, isne print too kiya i as 7, lekin increase bhi kiya i by one, dikahaya nhi
uske baad jb humne print kiya again i this time as simple i not i++
usne value i ki 8 dikhayi joo pehle wahi eq 1 ne increase ki thi
i hope you understand
*/



    return 0;

}