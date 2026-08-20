// File: game_using_do_while.c
// Topic: Mini Project
// Category: Projects
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
int no_of_guesses=0;
int guess;

srand(time(0));

    int randomNumber = (rand() % 50) + 1;

   while (guess!=randomNumber)
   {
    printf("Chal number bata: ");
    scanf("%d" , &guess);
    if (guess<randomNumber)
    {
       printf("abey tera number chota hai\n");
    }
    else if (guess>randomNumber)
    {
        printf("number bada hai tera\n");
    }
    else{
        printf("sahi pakde hai!!\n");
    }
    no_of_guesses++;
   }
   printf("Bhai %d attempts mai guess kiya " , no_of_guesses);
    

    return 0;

}