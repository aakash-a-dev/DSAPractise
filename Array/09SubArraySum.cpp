// Through Prefix Sum 
#include<iostream>
using namespace std;

// Time Complexity O(N^2)
int largeSubarray(int arr[], int n){
    // Prefix Sum
    int prefix[100] = {0};
    prefix[0] = arr[0];
    
    for(int i=1; i<n; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }

    int largest_sum = 0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int subarraySum = i>0 ? prefix[j] - prefix[i-1] : prefix[j];
            // Put a check on subarraySum > largest_sum
            largest_sum = max(largest_sum, subarraySum);
        }
    }
    return largest_sum;
}

int main(){
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr)/sizeof(int);

    cout<<largeSubarray(arr, n)<<endl;

    return 0;
}