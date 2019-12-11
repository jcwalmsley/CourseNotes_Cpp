/*
    For this programming quiz, I would like you to create a game called TicTacToe. In this version of the game you will need to:

    Create a 4x4 game board
    Prompt the first user (the 'x' user) to enter their name
    Prompt the second user (the 'o' user) to enter their name
    Prompt the 'x' user to select a grid position where they would like to place an 'x'.
    Prompt the 'o' user to select a grid position where they would like to place an 'o'.
    After each user has a turn, check for any row, column, diagonal that has 4 'x's or 4 'o's.
    If 4 'x's are found in the same col, row, diagonal, declare the 'x' user the winner.
    If 4 'o's are found in the same col, row, diagonal, declare the 'o' user the winner.
    End the game and declare the winner.
    If the grid is filled (each player gets 8 turns) and there is not a row, column, diagonal
    with 4 of the same symbol, the game is tied. Declare a tie game.
*/
#include <stdio.h>
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>

using namespace std;

class Board()
{//tracks game status and winner
    char positionsSelected[16];
    char winner;

public:
    Board()
    {
        winner = 'z'; //no winner so far or tie

        for(int i=0; i<16, i++)
        {
            positionsSelected[i] = '_';
        }
    }


    char* getPositions(void)
    {//get all positions on board
        return positionsSelected;
    }

    int setPosition(int gridNumber, char user)
    {
        {
            if(positionsSelected[gridNumber] == '_')
            {
                positionsSelected[gridNumber] = user;
                return 0;
            }
            else
            {
                //position taken
                return -1;
            }
        ]
        return 0;
    }
    char checkRows()
    {
        int rows = 0;
        int columns = 0;
        int fourInRowX = 0';
        int fourInRowO = 0;

    //check rows for a winner
    for(int rows = 0; rows <16; rows = rows+4)
    {
        for(int i = 0; i<4; i++)
        {
            if (positionsSelected[i + rows] == 'x')
                fourInRowX++;
            if (positionsSelected[i + rows] == 'o')
                fourInRowO++;
        }
        if (fourInRowX == 4)
        {
            winner = 'x';
            return x;
        }
        if (fourInRowO == 4)
        {
            winner = 'o';
            return 0;
        }
        fourInRowX = 0;
        fourInRowO = 0;
    }
    return 'z';

    }
    char checkDiagonals()
    {
        char winner = 'z';
        int fourInRowX = 0;
        int fourInRowO = 0;

        //left to right diagonal check
        for (int i = 0; i<16; i=i+5)
        {
            if(positionsSelected[i] = 'x')
                fourInRowX++;
            if(positionsSelected[i] = 'o')
                fourInRowO++;
        }

        //right to left diagonal check
        if(fourInRowO !=4; and fourInRowX !=4)
        {
            fourInRowX = 0;
            fourInRowO = 0;
            for(int i = 3; i<15; i=i+3)
            {
                if(positionsSelected[i] == 'x')
                    fourInRowX++;
                if(positionsSelected[i] == 'o')
                    fourInRowO++;
            }
        }
        if(fourInRowX == 4)
        {
            winner = 'x';
            return winner;
        }
        if(fourInRowO == 4)
        {
            winner = '0';
            return winner;
        }
        fourInRowX = 0;
        fourInRowO = 0;
        return winner;

    }

    char determineWinner()
    {
        char winner = 'z';
        winner = checkRows();
        if(winner = 'z')
            winner = checkColumns();
        if(winner = 'z')
            winner = checkDiagonals();
        return winner;
    }
};
