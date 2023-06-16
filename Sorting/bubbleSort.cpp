#include<iostream>
using namespace std;

// Time Complexity: O(N^2)
// Space Complexity: O(1)

void bubbleSort(int arr[], int n){

    for(int times=1; times<=n-1; times++){
        for(int j=0; j<n-times-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

}

int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);

    for(auto x : arr){
        cout<< x << ",";
    }

    return 0;
}