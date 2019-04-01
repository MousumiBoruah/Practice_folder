#include <stdio.h>
#include <stdlib.h>
void print_board(char board[][3]);
void user_one_input(char board[][3]);
void user_two_input(char board[][3]);
void user_one_input(char board[3][3])
{
    int x, y, i, j=0;
    printf("Player X Enter Move with space separated\n");
    scanf("%d %d", &x, &y);
    board[x][y] = 'X';
    print_board(board);
    for(i=0;i<3;i++)
    {  
        if(board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X'){
            printf("Player 1 Wins\n");
            return;
        }
        else if(board[i][j] == 'X' && board[i][j+1] == 'X' && board[i][j+2] == 'X')
         {
             printf("Player 1 Wins\n");
             return;
        }
        else if(board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X'){
            printf("Player 1 Wins\n");
            return;
        }
    }
    user_two_input(board);

}
void user_two_input(char board[3][3])
{
    int x, y, i , j=0;
    printf("Player O  Enter Move with space separated\n");
    scanf("%d %d", &x, &y);
    board[x][y] = 'O';
    print_board(board);
    for(i=0;i<3;i++)
    {

        if(board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O'){
            printf("Player 12 Wins\n");
            return;
        }
        else if(board[i][j] == 'O' && board[i][j+1] == 'O' && board[i][j+2] == 'O')
        {
            printf("Player 2 Wins\n");
            return;
        }
        else if(board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O'){
            printf("Player 2 Wins\n");
            return;
        }
    }
    user_one_input(board);

}


void initialize(char board[3][3])
{
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            board[i][j] = '*';
        }
    }

}
void print_board(char board[3][3])
{
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("__");
            printf("%c_|", board[i][j]);
            printf("__");
        }
    printf("\n");
    }

}

int main()
{
   char board[3][3];
   initialize(board);
   user_one_input(board);
}
