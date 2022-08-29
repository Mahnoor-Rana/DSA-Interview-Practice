#include<iostream>
#include<queue>
using namespace std;
class CircularQueue{
	int arr[5];
	int n= 1000001; // size of array
	int front=-1;
	int end=-1;
	public:
	// push element in array 
	bool enqueue(int ele){
		if((front == 0 && end == n-1) or (end == (front-1)%(n-1))){
			cout<<"Queue is full"<<endl;
			return false;
		}
		else if (front == -1){ // first elemnet to push
			front = end = 0;
		}
		else if (end == n-1 && front !=0){
			end = 0;
		}
		else {
			end++;
		}
		arr[end]= ele;
		return true;
	}
int dequeue(){
	if(front==-1){
		cout<<"Queue is Empty"<<endl;
		return -1;
	}

	int a;
	arr[front]=-1;
	if(front==end){
		front=end=-1;
	}
	else if(front = n-1){
		front =0;
	}
	else {
			end++;
		}
		
		return a;
}
};
int main(){
	CircularQueue cq;
	cq.enqueue(2);
	return 0;
	// to display queue you have to define the function.
}
