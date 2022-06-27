// Write a program to move all the negative element to one side of the array 
#include<iostream>
using namespace std;
void NegativeEle(int arr[], int n){
	int j = 0;
	for(int i =0;i<n;i++){
		if(arr[i]<0){
			if(i != j){
				swap(arr[i],arr[j]);
			}
			j--;
		}
		
	}
for(int i =0;i<n;i++){
	cout<<arr[i];
}
}
int main(){
	int arr[] = {3,-2,4,-5};
	int n = sizeof(arr)/sizeof(arr[0]);
	NegativeEle(arr,n);
	return 0;
	
	
}

