// Understanding Arrays & Function Pass By Reference

#include<iostream>
using namespace std;

void printArray(int arr[]){     // Pass By Reference
    cout<<"In Function "<<sizeof(arr)<<endl;

    int n = sizeof(arr)/sizeof(int);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[]={1,2,3,4};
    int n = sizeof(arr)/sizeof(int);

    cout<<"In Main "<<sizeof(arr)<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }

    printArray(arr);

    return 0;
}