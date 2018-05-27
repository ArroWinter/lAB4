#include <stdio.h>
#include <stdlib.h>
#include "board.h"
void fillboard(char s[9][9])
{
    s[1][1] = 'R';
    s[1][2] = 'H';
    s[1][3] = 'E';
    s[1][4] = 'Q';
    s[1][5] = 'K';
    s[1][6] = 'E';
    s[1][7] = 'H';
    s[1][8] = 'R';

    s[2][1] = 'P';
    s[2][2] = 'P';
    s[2][3] = 'P';
    s[2][4] = 'P';
    s[2][5] = 'P';
    s[2][6] = 'P';
    s[2][7] = 'P';
    s[2][8] = 'P';

    for (int i = 3; i <= 6; i++)
    {
        for (int j = 0; j <= 9; j++)
	{
	    s[i][j] = 32; 
	    }
    }

    s[8][1] = 'r';
    s[8][2] = 'h';
    s[8][3] = 'e';
    s[8][4] = 'q';
    s[8][5] = 'k';
    s[8][6] = 'e';
    s[8][7] = 'h';
    s[8][8] = 'r';

    s[7][1] = 'p';
    s[7][2] = 'p';
    s[7][3] = 'p';
    s[7][4] = 'p';
    s[7][5] = 'p';
    s[7][6] = 'p';
    s[7][7] = 'p';
    s[7][8] = 'p';
}

void board(char s[9][9])
{
    printf("   -------------------------------\n");
    printf("1 | %c | %c | %c | %c | %c | %c | %c | %c |\n", s[1][1], s[1][2], s[1][3], s[1][4],
    s[1][5], s[1][6], s[1][7], s[1][8]);
    printf("  |---|---|---|---|---|---|---|---|\n");
    printf("2 | %c | %c | %c | %c | %c | %c | %c | %c |\n", s[2][1], s[2][2], s[2][3], s[2][4],
    s[2][5], s[2][6], s[2][7], s[2][8]);
    printf("  |---|---|---|---|---|---|---|---|\n");
    printf("3 | %c | %c | %c | %c | %c | %c | %c | %c |\n", s[3][1], s[3][2], s[3][3], s[3][4],
    s[3][5], s[3][6], s[3][7], s[3][8]);
    printf("  |---|---|---|---|---|---|---|---|\n");
    printf("4 | %c | %c | %c | %c | %c | %c | %c | %c |\n", s[4][1], s[4][2], s[4][3], s[4][4],
    s[4][5], s[4][6], s[4][7], s[4][8]);
    printf("  |---|---|---|---|---|---|---|---|\n");
    printf("5 | %c | %c | %c | %c | %c | %c | %c | %c |\n", s[5][1], s[5][2], s[5][3], s[5][4],
    s[5][5], s[5][6], s[5][7], s[5][8]);
    printf("  |---|---|---|---|---|---|---|---|\n");
    printf("6 | %c | %c | %c | %c | %c | %c | %c | %c |\n", s[6][1], s[6][2], s[6][3], s[6][4],
    s[6][5], s[6][6], s[6][7], s[6][8]);
    printf("  |---|---|---|---|---|---|---|---|\n");
    printf("7 | %c | %c | %c | %c | %c | %c | %c | %c |\n", s[7][1], s[7][2], s[7][3], s[7][4],
    s[7][5], s[7][6], s[7][7], s[7][8]);
    printf("  |---|---|---|---|---|---|---|---|\n");
    printf("8 | %c | %c | %c | %c | %c | %c | %c | %c |\n", s[8][1], s[8][2], s[8][3], s[8][4],
    s[8][5], s[8][6], s[8][7], s[8][8]);
    printf("   -------------------------------\n");
    printf("    a   b   c   d   e   f   g   h  \n");
    printf("\n");
}
