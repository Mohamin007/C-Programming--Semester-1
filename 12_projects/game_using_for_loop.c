// File: game_using_for_loop.c
// Topic: Mini Project
// Category: Projects
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
int guess;
int no_of_guesses=0;
srand(time(0));

    int randomNumber = (rand() % 50) + 1;

    for (; guess!=randomNumber; no_of_guesses++)
        {
        printf("Guess the number ");
        scanf("%d" , &guess);
      if (guess>randomNumber)
      {
        printf("Lower\n");
      }
      else if(guess< randomNumber){
        printf("Higher\n");
      }
      else{
        printf("Conrats\n");
      }
      
    }
    printf("your no of guesses are %d" , no_of_guesses);
    return 0;

}