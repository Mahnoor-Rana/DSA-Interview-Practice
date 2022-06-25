#include<iostream>
#include<algorithm>
using namespace std;
int kthsmallest(int arr[], int n ,int k){
	sort(arr,arr+n);
	return arr[k-1];
}
int main(){
	int arr [] = {2,4,6,7,8,0};
	int n = sizeof(arr)/sizeof(arr[0]);
   cout<<"The kth smallest value is :"<<kthsmallest(arr,n,4)<<endl;
	return 0;
}
