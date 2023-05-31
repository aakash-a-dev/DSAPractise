#include<iostream>
using namespace std;

int main(){
    int marks[100];
    int n;

    cout<<"Enter No. Of Students ";
    cin>>n;

    // Input
    for(int i=0; i<n; i++){
        cin>>marks[i];
    }

    // Output
    for(int i=0; i<n; i++){
        cout<<marks[i]<< ",";
    }

    cout<<endl;

    return 0;
}