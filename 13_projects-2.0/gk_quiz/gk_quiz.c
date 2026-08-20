#include <stdio.h>

int main()
{
    char play;

    do {

        int point = 0;
        int x;

        printf("\n------ WELCOME TO MY QUIZ ------\n");
        printf("Every correct answer = +1 point\n");
        printf("Wrong answer = Game Over\n\n");

        // Question 1
        printf("Question 1: What is the capital of France?\n");
        printf("1.Paris\n2.Berlin\n3.Madrid\n4.Rome\n");

        do{
            printf("Enter choice (1-4): ");
            scanf("%d", &x);
            if(x < 1 || x > 4)
                printf("Invalid choice! Enter between 1 and 4.\n");
        }while(x < 1 || x > 4);

        if(x == 1){
            printf("Correct!\n\n");
            point++;
        }
        else{
            printf("Wrong answer!\nGame Over!\nYour Points: %d\n", point);
            goto endgame;
        }

        // Question 2
        printf("Question 2: Which planet is known as the Red Planet?\n");
        printf("1.Earth\n2.Mars\n3.Jupiter\n4.Venus\n");

        do{
            printf("Enter choice (1-4): ");
            scanf("%d", &x);
            if(x < 1 || x > 4)
                printf("Invalid choice! Enter between 1 and 4.\n");
        }while(x < 1 || x > 4);

        if(x == 2){
            printf("Correct!\n\n");
            point++;
        }
        else{
            printf("Wrong answer!\nGame Over!\nYour Points: %d\n", point);
            goto endgame;
        }

        // Question 3
        printf("Question 3: Who developed the C programming language?\n");
        printf("1.Dennis Ritchie\n2.Bjarne Stroustrup\n3.James Gosling\n4.Guido van Rossum\n");

        do{
            printf("Enter choice (1-4): ");
            scanf("%d", &x);
            if(x < 1 || x > 4)
                printf("Invalid choice! Enter between 1 and 4.\n");
        }while(x < 1 || x > 4);

        if(x == 1){
            printf("Correct!\n\n");
            point++;
        }
        else{
            printf("Wrong answer!\nGame Over!\nYour Points: %d\n", point);
            goto endgame;
        }

        // Question 4
        printf("Question 4: What is the boiling point of water?\n");
        printf("1.90 C\n2.95 C\n3.100 C\n4.120 C\n");

        do{
            printf("Enter choice (1-4): ");
            scanf("%d", &x);
            if(x < 1 || x > 4)
                printf("Invalid choice! Enter between 1 and 4.\n");
        }while(x < 1 || x > 4);

        if(x == 3){
            printf("Correct!\n\n");
            point++;
        }
        else{
            printf("Wrong answer!\nGame Over!\nYour Points: %d\n", point);
            goto endgame;
        }

        // Question 5
        printf("Question 5: What is the full form of RAM?\n");
        printf("1.Random Access Memory\n2.Read Access Memory\n3.Rapid Access Memory\n4.Run Access Memory\n");

        do{
            printf("Enter choice (1-4): ");
            scanf("%d", &x);
            if(x < 1 || x > 4)
                printf("Invalid choice! Enter between 1 and 4.\n");
        }while(x < 1 || x > 4);

        if(x == 1){
            printf("Correct!\n\n");
            point++;
            printf("You completed the quiz!\nYour total points: %d\n", point);
        }
        else{
            printf("Wrong answer!\nGame Over!\nYour Points: %d\n", point);
        }

        endgame:

        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &play);

    } while(play == 'y' || play == 'Y');

    printf("\nThanks for playing!\n");
    printf("\nGoodBye!\n");

    return 0;
}