#include<iostream>
#include<queue>
using namespace std;
int main(){
	// create a queue
	queue<int> q;
	q.push(11);
	cout<<"Front of q : "<<q.front()<<endl;
	q.push(88);
	
	//pop
	q.pop();
	cout<<"Size of queue: "<< q.size()<<endl;
	
	//isempty function
	
	if(q.empty()){
		cout<<"Queue is empty"<<endl;
	}
	else{
		cout<<"Queue is not empty"<<endl;
	}
	return 0;
	}
