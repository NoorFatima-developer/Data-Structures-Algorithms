#include <iostream>
using namespace std;

// Find maximum element in array..

int main(){
    int arr[5] = {0,1,2,3,4};
    int ans = INT_MIN;
    
    for(int i=0; i<5; i++){
        if(arr[i] > ans){
            ans = arr[i];
        }
    cout << "Maximum element is: " << ans << endl;
    }
}