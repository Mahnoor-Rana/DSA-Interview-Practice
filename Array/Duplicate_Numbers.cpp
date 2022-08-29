// Write a program tto find the duplicate number in an array
#include<iostream>
using namespace std;

int DupNum(int arr[], int n){
    for(int i =0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<endl;
            }
        }
    }}

int main(){
    int arr [10] = {6,2,3,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
   cout<<DupNum(arr,n);
    return 0;
}
	