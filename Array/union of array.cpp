// Write a program that combines two array or union of an array 
#include<iostream>
using namespace std;

int Union(int arr1[] ,int arr2[], int m, int n){
	
      int i = 0, j = 0; 
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] <<endl;
		
		else if(arr2[j]<arr1[i]){
		    cout<<arr2[j++]<<endl;	
			}
		else{
			cout<<arr2[j++]<<endl;
			i++;
		}}
	
	while(i<m){
		cout<<arr1[i++]<<endl;
	}
	while(j<n){
		cout<<arr2[j++]<<endl;
	}
}
int main(){
	int arr1[]={1,2,3,4,5};
	int arr2[] = {1,5,8,9,6,7};
	
	int n = sizeof(arr2)/sizeof(arr2[0]);
	int m = sizeof(arr1)/sizeof(arr1[0]);
	
	Union(arr1,arr2,m,n);
	return 0;
	 
}
