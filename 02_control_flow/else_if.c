//this is called else if else ladder
/*
now you got a challenge
you have to ask a person age 
if its 18+ print he can drive, if he's 60+ print he can drive and is senior
if he's below 18 he cannot drive
its seems easy but is tough 
*/
#include<stdio.h>

int main(){

int age = 200;
if (age>60){
    printf("You can drive and You are senior");// till here its fine, but we didnt fulfill the above question.
// so we do else if statement
}
else if (age > 18){
    printf("You can drive  ");
}
else{
    printf("You cannot drive");
}

    return 0;

}//all this is if else if else ladder, and remember, only one of them will run.