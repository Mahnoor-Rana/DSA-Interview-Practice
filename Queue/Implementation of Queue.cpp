// Implement a Queue Data Structure specifically to stare integer data by using array
// its just implementation of queue through class

#include<iostream>
#include<queue>
using namespace std;
class Queue{
	public:
	int arr[5];
	int qfront = 0;
	int end = 0;
	int size = 1000001;
	//
	
bool isEmpty(){
	if(qfront == end){
		return true;
	}
	else{
		return false;
	}
}
void enqueue(int ele){
	if(end == qfront){
		cout<<"Queue is full"<<endl;
	}
	else{
	    arr[qfront];
		arr[qfront] = ele;
		qfront++;
	}
}
int dequeue(){
	if (qfront == end){
		return -1;
	}
	else{
		int a =  arr[qfront];
		arr[qfront] = -1;
		qfront++;
		if(qfront == end){
			qfront = 0;
			end=0;
		}
		return a;
	}
}
int front(){
	if(qfront == end){
		return -1;
	}
	else{
		return arr[qfront];
	}
}
};
int main(){
	Queue q1;
	int arr[4] = {2,3,1};
	q1.enqueue(4);
	return 0;
}







