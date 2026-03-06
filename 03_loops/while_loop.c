// File: while_loop.c
// Topic: for, while, do-while loops
// Category: Loops
// Course: Introduction to C Programming — Semester 1, Kashmir University

/*
while loop is the loop which keeps on repeating untill the condition in it becomes false,
eg if we did i=1
then while (i<3){
printf("Happy birthday");
i = i + 1
}
so here our integer is 1 then we made a condition in which we said until i is less than 3, print happy bday
with the given eqquation it has to follow is  i = i + 1
means first givn i is 1 which is less than  3 so it prints happy bday
then i (value 1)goes to equation i = i+1 and becomes 2 as(i = 1+1)
then our i is 2 which is less than 3 so it again satisfied the condition we gave (i.e i<3)
so again happy birthday gets printed, then i goes to the equation i = i + 1
now it becomes 3 as i = 2 + 1
now in our condition i<3, now our i is 3 but 3<3, so condition becomes false and our loop stopped.
so the total of 2 happy birthday are printed
ill give you example below in code
*/
#include<stdio.h>

int main(){

int i=1;
while (i<3){
    printf("Hi Mohamin\n");
    i = i + 1; // we can write i = i + 1 as i++ also, which is the samething as it also increases the value of i by 1.
}
    return 0;

}