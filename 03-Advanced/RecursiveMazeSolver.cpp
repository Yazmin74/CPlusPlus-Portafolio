#include <iostream>
#include <stack>

using namespace std;
const int SIZE = 9;

/// The second SIZE is needed in the function prototype since it is a 2D array.

void display(char arr[SIZE][SIZE] )
{
    cout << endl << "= = = = = = = = = = = " << endl;
    for(int i  = 0; i < SIZE; i++)
    {
        cout << "= ";
        for(int j  = 0; j < SIZE; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout <<  "= " << endl;
    }
    cout << "= = = = = = = = = = = " << endl;
    return;
}
void displayFinal(char arr[SIZE][SIZE] )
{
    cout << endl << "Path:" << endl;
    cout << "= = = = = = = = = = = " ;
    for(int i  = 0; i < SIZE; i++)
    {
        cout << endl << "= ";
        for(int j  = 0; j < SIZE; j++)
        {
            if (arr[i][j] == 'X')
                cout <<  "  ";
            else
                cout << arr[i][j] << " ";
        }
        cout <<  "= ";
    }
    cout << endl << "= = = = = = = = = = = " << endl;
}

bool withinTheBoundary(int i, int j)
{
    return i >= 0 && i < SIZE && j >= 0 && j < SIZE;
}

//Recursive function to find the Path
bool findPath(char maze[SIZE] [SIZE], int i, int j)
{
    if (!withinTheBoundary(i, j))
       return false;
    if (maze[i][j]== 'W' || maze[i][j]== 'X' || maze[i][j] == 'o')
       return false;
    if (maze[i][j]== 'G')
       return true;
       
    //Mark current cell as part of the Path
    if (maze[i][j] != 'S') maze[i][j] ='o';
    
    //Try all four directions
    if (findPath(maze, i + 1, j)|| //Down
        findPath(maze, i - 1, j)|| //Up
        findPath(maze, i, j + 1)|| // Rigth
        findPath(maze, i, j - 1)) //left
    { 
        return true;
    }
    
    //Mark dead end
    if (maze[i][j] != 'S') maze[i][j] = 'X';
    
    return false;
}


int main()
{
    char maze2D[SIZE][SIZE] =
      { {'S', ' ', ' ', ' ', 'W', ' ', ' ', ' ', ' '},
        {' ', 'W', ' ', ' ', 'W', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', 'W', 'W', ' ', ' ', 'W', ' '},
        {'W', ' ', 'W', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', 'W', ' ', ' ', 'W', ' ', ' ', ' '},
        {' ', 'W', ' ', ' ', ' ', ' ', 'W', ' ', 'W'},
        {' ', 'W', ' ', 'W', ' ', ' ', 'W', ' ', ' '},
        {' ', ' ', ' ', 'W', 'W', 'W', ' ', ' ', 'W'},
        {' ', ' ', ' ', ' ', ' ', 'W', ' ', ' ', 'G'},
                      };

    display(maze2D);
    
   //Find 'S'
   int startRow = -1, startCol = -1;
   for (int i = 0; i < SIZE; i++)
       for (int j = 0; j < SIZE; j++)
          if (maze2D[i][j] =='S')
          {
              startRow = i;
              startCol = j;
          }
    if (startRow != -1 && startCol != -1)
    {
        findPath(maze2D, startRow, startCol);
        displayFinal (maze2D);
    }
    else
    {
        cout << "Start position 'S' not found!" << endl;
    }

    return 0;
}
