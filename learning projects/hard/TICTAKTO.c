#include <stdbool.h>
#include <stdio.h>

const char PLAYER = 'X';
const char COMP = 'O';
bool Running = true;
char Board[3][3] = {{' ', ' ', ' '},
                    {' ', ' ', ' '},
                    {' ', ' ', ' '}};

void Print_Board() {
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", Board[0][0], Board[1][0], Board[2][0]);
    printf("-----|-----|-----\n");
    printf("  %c  |  %c  |  %c \n", Board[0][1], Board[1][1], Board[2][1]);
    printf("-----|-----|-----\n");
    printf("  %c  |  %c  |  %c \n", Board[0][2], Board[1][2], Board[2][2]);
    printf("     |     |     \n");
}

void MoveInput() {
    bool Loop = true;
    int x = 0;
    int y = 0;

    while(Loop == true) {
        printf("Enter row(1-3): ");
        scanf("%d", &x);
        printf("Enter columns(1-3): ");
        scanf("%d", &y);
        x--;
        y--;
        Loop = (x < 0 || y < 0 || x > 2 || y > 2) ? true : false;
    }

    Board[x][y] = PLAYER;
}

int ScanFreeBoard() {
    int Free_Spaces = 9;

    for(int i = 2; i > -1; i--) {
        for(int j = 2; j > -1; j--) {
            if (Board[j][i] != ' ') {
                Free_Spaces--;
            }
        }
    }

    return Free_Spaces;
}

void CheckWinner()  {
    char Winner = ' ';
    //Player

    //Diagnal
    if(Board[0][0] == PLAYER && Board[1][1] == PLAYER && Board[2][2] == PLAYER) {
        Winner = PLAYER;
    }
    else if(Board[0][2] == PLAYER && Board[1][1] == PLAYER && Board[2][0] == PLAYER) {
        Winner = PLAYER;
    }
    //Rows
    else if(Board[0][0] == PLAYER && Board[0][1] == PLAYER && Board[0][2] == PLAYER) {
        Winner = PLAYER;
    }
    else if(Board[1][0] == PLAYER && Board[1][1] == PLAYER && Board[1][2] == PLAYER) {
        Winner = PLAYER;
    }
    else if(Board[2][0] == PLAYER && Board[2][1] == PLAYER && Board[2][2] == PLAYER) {
        Winner = PLAYER;
    }
    //Collumns
    else if(Board[0][0] == PLAYER && Board[1][0] == PLAYER && Board[2][0] == PLAYER) {
        Winner = PLAYER;
    }
    else if(Board[0][1] == PLAYER && Board[1][1] == PLAYER && Board[2][1] == PLAYER) {
        Winner = PLAYER;
    }
    else if(Board[0][2] == PLAYER && Board[1][2] == PLAYER && Board[2][2] == PLAYER) {
        Winner = PLAYER;
    }

    //Comp

    //Diagnal
    if(Board[0][0] == COMP && Board[1][1] == COMP && Board[2][2] == COMP) {
        Winner = COMP;
    }
    else if(Board[0][2] == COMP && Board[1][1] == COMP && Board[2][0] == COMP) {
        Winner = COMP;
    }
    //Rows
    else if(Board[0][0] == COMP && Board[0][1] == COMP && Board[0][2] == COMP) {
        Winner = COMP;
    }
    else if(Board[1][0] == COMP && Board[1][1] == COMP && Board[1][2] == COMP) {
        Winner = COMP;
    }
    else if(Board[2][0] == COMP && Board[2][1] == COMP && Board[2][2] == COMP) {
        Winner = COMP;
    }
    //Collumns
    else if(Board[0][0] == COMP && Board[1][0] == COMP && Board[2][0] == COMP) {
        Winner = COMP;
    }
    else if(Board[0][1] == COMP && Board[1][1] == COMP && Board[2][1] == COMP) {
        Winner = COMP;
    }
    else if(Board[0][2] == COMP && Board[1][2] == COMP && Board[2][2] == COMP) {
        Winner = COMP;
    }

    if(Winner == PLAYER) {
        printf("You won!\n");
        Running = false;
    }
    else if(Winner == COMP) {
        printf("You loose!\n");
        Running = false;
    }
    else if(Winner == ' ' && ScanFreeBoard() == 0) {
        printf("It's a tie!\n");
        Running = false;
    }
}

int main() {

    while (Running == true) {
        Print_Board();
        MoveInput();
        Print_Board();
        CheckWinner();
        //CompMove();
        //Print_Board();
        //CheckWinner();
    }

    return 0;
}
