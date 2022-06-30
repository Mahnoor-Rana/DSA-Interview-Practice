#include<iostream>
using namespace std;

int Union(int arr1[] ,int arr2[], int n, int m){
	
      int i = 0, j = 0; 
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] << " ";
		
		    else if(arr2[j]<arr1[i]){
		    cout<<arr1[j++];	
			}
		else{
			cout<<arr2[j++];
			i++;
		}
			 int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] << " ";
	}
}}
int main(){
	int arr1[]={1,2,3,4,5};
	int arr2[] = {2,1,3,8,9};
	int n = sizeof(arr2)/sizeof(arr1[0]);
	int m = sizeof(arr1)/sizeof(arr1[0]);
	Union(arr1,arr2,m,n);
	return 0;
	 
}
