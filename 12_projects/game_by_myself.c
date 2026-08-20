// File: game_by_myself.c
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

    do{
        printf("guess the number : ");
        scanf("%d" , &guess);
        if (guess>randomNumber){
            printf("Lower\n");
        }
        else if(guess < randomNumber){
            printf("Higher\n");
        }
        else{
            printf("YOUR GUESS IS RIGHT!!!\n");
        }
        no_of_guesses++;
  
    } while (guess!=randomNumber);
    
printf("you guessed the number in %d attempts!!!" , no_of_guesses);
    return 0;

}