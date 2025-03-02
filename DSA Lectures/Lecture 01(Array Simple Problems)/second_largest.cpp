// 5: Find the second largest element in an array of unique elements of size n. Where n>3.

// aghr mai pehly largest find krleti o and then second largets krti o it would be easy to solve for me..

// way 01...
#include<iostream>
#include<vector>
using namespace std;

int main(){
    // Size of the array:
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    if(n<3){
        cout<<"Size should be greater than 3!";
        return 1;
    }

    // Get array from user:
    int* arr = new int[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // largest and second largest elements:
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0; i<n; i++){
        if(arr[i]>largest){
            secondLargest = largest; //yahan abhi INT_MIN ayega
            largest = arr[i];        // yahan pehla no ayega array ka..
        } 
        // ye condition iss case klye lagae hai k aghr oper wali cond largest k lye false hoe lkin secondlargest klye true hoe
        // tu oss case m hmain second largest ko update krna hoga tu phr wo oss case m else wali cond mai second largets ko update krdeyga...

        else if(arr[i] > secondLargest){
            secondLargest = arr[i]; 
        }
    }
    
   // print secondlargest..
   cout<<"Second largest element: "<<secondLargest<<endl;
   
    // delete dynamically allocated memory:
    delete[] arr;
    return 0;
 
}


// way 02...

//{ Driver Code Starts

// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        int ans = -1;
        for(int i = 0; i < n; i++){
            if(arr[i] > ans){
                ans = arr[i];
            }
        }
        
        int second = -1;
        for(int i = 0; i < n; i++){
            if(arr[i]!=ans && arr[i] > second){
                second = max(second, arr[i]);
            }
        }
        
        return second;
    }
};


