// File: game_recursion.c
// Topic: Recursion, Base Case, Recursive Functions
// Category: Recursion
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char board[9];

void init_board() {
    for (int i = 0; i < 9; i++) board[i] = '1' + i; // show positions 1..9 initially
}

void print_board() {
    printf("\n %c | %c | %c\n", board[0], board[1], board[2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", board[3], board[4], board[5]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n\n", board[6], board[7], board[8]);
}

int is_free(int idx) {
    return board[idx] != 'X' && board[idx] != 'O';
}

char check_winner() {
    // winning combos
    int wins[8][3] = {
        {0,1,2},{3,4,5},{6,7,8}, // rows
        {0,3,6},{1,4,7},{2,5,8}, // cols
        {0,4,8},{2,4,6}          // diags
    };
    for (int i = 0; i < 8; i++) {
        int a = wins[i][0], b = wins[i][1], c = wins[i][2];
        if (board[a] == board[b] && board[b] == board[c]) return board[a];
    }
    // check draw
    int full = 1;
    for (int i = 0; i < 9; i++) if (is_free(i)) { full = 0; break; }
    if (full) return 'D'; // draw
    return 'N'; // none yet
}

int try_move_for(char who, int pos) {
    // pos 0..8
    if (!is_free(pos)) return 0;
    char backup = board[pos];
    board[pos] = who;
    char r = check_winner();
    board[pos] = backup;
    return (r == who);
}

int computer_move() {
    // 1) Win if possible
    for (int i = 0; i < 9; i++) if (try_move_for('O', i)) { board[i] = 'O'; return i; }
    // 2) Block player if they can win next
    for (int i = 0; i < 9; i++) if (try_move_for('X', i)) { board[i] = 'O'; return i; }
    // 3) Take center
    if (is_free(4)) { board[4] = 'O'; return 4; }
    // 4) Take a corner (random order)
    int corners[4] = {0,2,6,8};
    for (int i = 0; i < 4; i++) {
        int idx = corners[rand() % 4];
        if (is_free(idx)) { board[idx] = 'O'; return idx; }
    }
    // 5) Any side
    int sides[4] = {1,3,5,7};
    for (int i = 0; i < 4; i++) {
        int idx = sides[rand() % 4];
        if (is_free(idx)) { board[idx] = 'O'; return idx; }
    }
    // fallback (shouldn't happen)
    for (int i = 0; i < 9; i++) if (is_free(i)) { board[i] = 'O'; return i; }
    return -1;
}

void player_move() {
    int pos;
    while (1) {
        printf("Your move (1-9): ");
        if (scanf("%d", &pos) != 1) {
            // clear input
            int c; while ((c = getchar()) != '\n' && c != EOF);
            printf("Please enter a number 1..9.\n");
            continue;
        }
        pos--; // convert to 0-based
        if (pos < 0 || pos > 8) {
            printf("Choose from 1 to 9.\n");
            continue;
        }
        if (!is_free(pos)) {
            printf("Spot taken! Choose another.\n");
            continue;
        }
        board[pos] = 'X';
        break;
    }
}

int main() {
    srand((unsigned)time(NULL));
    init_board();
    printf("Tic-Tac-Toe: You (X) vs Computer (O)\n");
    print_board();

    // Let player start. You can change to computer starting if you want.
    while (1) {
        player_move();
        print_board();
        char status = check_winner();
        if (status == 'X') { printf("You win! 🎉\n"); break; }
        if (status == 'D') { printf("It's a draw.\n"); break; }

        printf("Computer is thinking...\n");
        computer_move();
        print_board();
        status = check_winner();
        if (status == 'O') { printf("Computer wins. Good try!\n"); break; }
        if (status == 'D') { printf("It's a draw.\n"); break; }
    }

    printf("Game over. Play again? (y/n): ");
    char ch;
    scanf(" %c", &ch);
    if (ch == 'y' || ch == 'Y') main(); // restart; simple recursion ok here for small program
    else printf("Bye! Hope that helped with the boredom 😊\n");
    return 0;
}
