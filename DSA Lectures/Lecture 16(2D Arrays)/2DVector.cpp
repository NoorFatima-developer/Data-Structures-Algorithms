#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// create 2D vector...
int main() {

    // user sy input leny klye..
    int n, m;
    cout << "Enter rows and cols: ";
    cin >> n >> m;
    // col 4 and hr 1 ko initialize krdo 1 sy...
    // lkin jb hum user sy input lety hain fer hmain initialize krny ki zrort ni hoti
    // ku k hum log khud dery hoty hain values manually...
    vector<vector<int>>matrix(n, vector<int>(m, 1));

    // cin..
    for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
    cin >> matrix[i][j];

    // cout..
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        cout << matrix[i][j] << " ";
        cout << endl;
    }

    // Aghr mjy rows or cols ni dien hoe tu i will use this to find..
    // cout << "Rows = " << matrix.size();
    // cout << endl;
    // cout << "Cols = " << matrix[0].size();
}