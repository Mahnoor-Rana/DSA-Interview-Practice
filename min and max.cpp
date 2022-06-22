// Find the maximum and minimum number in array 
#include<iostream>
using namespace std;
int main(){
int min;
int max ;
int arr [] = {1,2,3,4,5};
max=arr[0];
	min=arr[0];
	for(int i=1;i<=5;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	cout<<"Maximum number is "<<max<<endl<<"Minimum number is "<<min;
	return 0;
}
