#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// create 2D vector...
int main() {
    // col 4 and hr 1 ko initialize krdo 1 sy...
    vector<vector<int>>matrix(3, vector<int>(4,1));

    for(int i = 0; i < 3; i++)
    for(int j = 0; j < 4; j++)
    cout << matrix[i][j] << " ";
}