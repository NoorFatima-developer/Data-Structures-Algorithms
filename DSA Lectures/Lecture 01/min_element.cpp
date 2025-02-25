#include <iostream>
using namespace std;

// Find minimum element in array..

int main(){
    int arr[5] = {0,1,2,3,4};
    int ans = INT_MAX;
    
    for(int i=0; i<5; i++){
        if(arr[i] < ans){
            ans = arr[i];
        }
    }
    cout << "Minimum element is: " << ans << endl;
    return 0;
}