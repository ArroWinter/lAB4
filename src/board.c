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

