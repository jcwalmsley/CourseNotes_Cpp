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
#include <fstream>

void getUserNames(string &, string &)
void printBlankBoard(string);
void printTheBoard(Board, string);
void printUserPrompt(string,char);
void printGameWinner(Board, string, string);
int getUserResponse();
void checkResponse(Board&, char);
void writeTheBoard(Board);

using namespace std;

void checkResponse(Board &boardIn, char input)
{//check position selected isn't already selected
    int position;
    int userInput;
    do
    {
        position = getUserResponse();
        userInput = board.setPosition(position, input);
        if(userInput = -1)
        {
            cout<<"That position is taken.";
        }

    }while (userInput == -1);
}

void getUserNames(string &userX, string &userY)
{//get the user names
    std::cout<<"Name of user to be 'x' :";
    std::cin>>userX;
    std::cout<<"Name of user to be 'o' :";
    std::cin>>userY;
}

void printBlankBoard()
{//print a blank board, with numbered squares
    for(int i = 0; i < 16; i++)
    {
        std::cout<<"|"<<i<<":";
        if(i < 9)
        {
            cout<<" ";
        }
        if(i%4 = 3)
        {
            std::cout<<"|\n";
        }
    }
    cout<<"\n\n\n";
}

void printTheBoard(Board boardIn)
{//print board w player moves
    printBlankBoard();

    for(int i = 0; i < 16; i++)
    {
        std::cout<<"|"<<boardIn.getPositions();
        if(i%4 = 3)
        {
            std::cout<<"|\n";
        }
    }
    cout<<"\n\n\n";
}

void writeTheBoard(Board boardIn)
{//print the board w player moves
    cout<<"\n\n";
    for(int i = 0; i < 16; i++)
    {
        cout<<"|"<<boardIn.getPositions()[i];
        if(i%4 < 3)
        {
            cout<<"\n";
        }
    cout<<"\n\n\n";
    }
}

void printUserPrompt(string nameIn, char letter)
{
    std::cout<<nameIn<<"Where would you like to place an "<<letter<<"?: ";
    cout<<"\n\n";
    cout<<"where would you like to place an "<<letter<<"? :";
}

void printGameWinner(Board boardIn, string nameX, string nameO)
{//print the winner statement
    char winner;
    winner = boardIn.determineWinner();
    if(winner == 'x')
    {
        cout<<"Congrats "<<nameX<<" you won!\n\n";
    }
    if(winner == 'o')
    {
        cout<<"Congrats "<<nameO<<" you won!\n\n";
    }
}
 int getUserResponse()
 {//get the chosen user position, check that it is an integer
    //check that it is between 0 and 15 inclusive
    int position = -1;
    cout<<"Enter an integer between 0 and 15; ";
    std::cin>>position;

    while(position > 15 or position < 0 or !cin)
    {
        cin.clear();
        //cin.ignore(numeric_limits<streamsize>::max(), 'n');
        std::cout<<"That is not a valid position\n";
        cout<<"Enter an integer between 0 and 15: ";
        cin.clear();
        cin>>position;
    }
    return position;
}
