/*
    "The class called 'Gameboard' is provided.

    Gameboard has a private member 'gameSpace[4][4]' that is a 4x4
    array that accepts a char for each of the 16 positions.

    The class has four public members that are functions and a constructor:

        The constructor sets each value of gameSpace to the char value '-'
        each position to be set with a single char

        Each position can be read individually

        PrintInfo will print gameSpace as a 4x4 matrix

        The helper function 'fourInRow' checks every row, looking for four
        'x's. When it finds four x's in the same row, it returns a '1',
        otherwise it returns a '0'.

    Task is to: complete the class Gameboard."

    main.cpp
    main.hpp
*/
/*header file for main.cpp*/
#include <iostream>
#include <iomanip>
using namespace std;

class Gameboard
{
    char gameSpace[4][4];
public:
    Gameboard();
    void setGameSpace(int row,int column, char value);
    char getGameSpace(int row,int column);
    int fourInRow(); //4 in a row pattern wins game
    void printInfo(); //prints board in a 4x4 matrix
};

//TODO: complete the class definition
  Gameboard::Gameboard()
{
    for(int i=0;i<4,i++)
        for(int j=0;j<4;j++)
        {
            gameSpace[i][j] = "-";
        }
}
void Gameboard::setGameSpace(int row, int column, char value)
{
    gameSpace [row][column] = value;
}
char Gameboard::getGameSpace(int row, int column)
{
    return gameSpace[row][column];
}
int Gameboard::fourInRow()
{
    int count;
    for(int i=0;i<4;i++)
    {
        count = 0;
        for(int j=0;j<4;j++)
        {
            if(gameSpace[i][j] == "x")
            {
                count++;
                //cout<<"count = "<<count;
            }
        }
        if(count == 4)
            return 1;
    }
    return 0;
}
void Gameboard printInfo()
{
    cout<<std::setw(5);
    cout<<"\n";
    for(int i=0;i<4,i++)
    {
        for(int j=0;l<4j++)
        {
            cout<<gameSpace[i][j];
        }
        cout<<"\n";
    }
}
