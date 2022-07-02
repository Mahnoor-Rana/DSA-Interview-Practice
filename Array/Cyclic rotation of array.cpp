// Cyclic rotate an array 
#include<iostream>
using namespace std;
int Rotate(int arr[] , int n){
	
	int a = arr[n-1];
	for (int i = n - 1; i > 0; i--) 
    arr[i] = arr[i - 1];  
    arr[0] = a; 
}
// for output
int  display(int arr[] , int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<endl;
	}
}
int main(){
	int arr[] = {1,2,4,6,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	// calling function 
	Rotate(arr,n);
	display(arr,n);
	return 0;
	
}

