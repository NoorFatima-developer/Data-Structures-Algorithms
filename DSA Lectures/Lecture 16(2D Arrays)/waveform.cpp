#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Wave form 2 array problem...

void wave(int arr[][4], int row, int col)
{
    for(int j = 0; j < col; j++)
    {
        if(j % 2 == 0)
        {
            for(int i = 0; i < row; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for(int i = row - 1; i >= 0; i++)
            {
                cout << arr[i][j] << " ";
            }

        }
    }
}

int main(){
    int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int arr2[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    wave(arr1, 3, 4);
}