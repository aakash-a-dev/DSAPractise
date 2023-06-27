#include<iostream>
using namespace std;

// Time Complexity Worst Case: O(N^2)
// Time Complexity Best Case: O(N)

void selectionSort(int arr[], int n){
    for(int pos = 0; pos <= n-2; pos++){
        int curr = arr[pos];
        int min_position = pos;

        // Find Out The Element
        for(int j=pos; j<n; j++){
            if(arr[j]<arr[min_position]){
                min_position = j;
            }
        }
        // Swap Outside the loop
        swap(arr[min_position], arr[pos]);
    }
}

int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    selectionSort(arr,n);

    for(auto x : arr){
        cout<< x << ",";
    }

    return 0;
}