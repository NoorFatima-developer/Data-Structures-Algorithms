#include <iostream>
using namespace std;

void printcol(int arr[][4], int row, int col)
{
    //column wise..
    for(int c = 0; c < col; c++)
    for(int r = 0; r < row; r++)
    cout << arr[r][c] << " ";

}

int main() {
    
    //create 2d array
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // print all the values in array row wise...
    for(int row = 0; row < 3; row++)
    for(int col = 0; col < 4; col++)
    cout << arr[row][col] << " ";

    // print all the values in array column wise..
    printcol(arr, 3, 4);

}