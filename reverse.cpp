// Write a program to reverse an array or string
#include<iostream>
using namespace std;
void reverse(int arr[],int start, int end){
	while(start<end){
	int a = arr[start];
	arr[start] = arr[end];
	arr[end] = a;
	start++;
	end--;
}
}
void display(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
}
int main(){
	int arr[3] = {2,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	reverse(arr,0,n-1);
	cout<<"Reveresed array is :"<<endl;
	display(arr,n);
	return 0;
	
}
