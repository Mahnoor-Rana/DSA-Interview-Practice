// Find the maximum and minimum number in array 
#include<iostream>
using namespace std;
//int main(){
//int min;
//int max ;
//int arr [] = {1,2,3,4,5};
//max=arr[0];
//	min=arr[0];
//	for(int i=1;i<10;i++)
//	{
//		if(arr[i]>max)
//		{
//			max=arr[i];
//		}
//		if(arr[i]<min)
//		{
//			min=arr[i];
//		}
//	}
//	cout<<"maximum number is"<<max<<endl<<"minimum number is"<<min;
//}
int arr[10];
	int max;
	int min;
//	cout<<"PLease enter elements in the array?";
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	max=arr[0];
	min=arr[0];
	for(i=1;i<10;i++)
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
	cout<<"maximum number is"<<max<<endl<<"minimum number is"<<min;
}
Output


