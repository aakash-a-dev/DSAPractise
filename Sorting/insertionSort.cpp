#include<iostream>
using namespace std;

// Time Complexity Worst Case: O(N^2)
// Time Complexity Best Case: O(N)

void insertionSort(int arr[], int n){
    for(int i=1; i<=n-1; i++){
        int curr = arr[i];
        int prev = i-1;
        // Loop to find the right index where the element current should be inserted 
        while(prev>=0 && arr[prev] > curr){
            arr[prev + 1] = arr[prev];
            prev = prev - 1;
        }
        arr[prev+1] = curr;
    }
}

int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    insertionSort(arr,n);

    for(auto x : arr){
        cout<< x << ",";
    }

    return 0;
}