#include <bits/stdc++.h> 
using namespace std; 

int front=-1; 
int rear=0; 
#define size 100
int arr[size];
bool isFull(){ 
    if(front == 0 && rear == size-1)
        return true;
	
	if(front == rear+1)
	    return true;
	  
	return false;
} 

bool isEmpty(){ 
	if(front == -1)
	    return true;
	return false;
} 

void insertfront(int key){ 
	if (isFull()){ 
		cout << "Overflow\n" << endl; 
		return; 
	} 

	if(front == -1){ 
		front = 0; 
		rear = 0; 
	} 

	else if (front == 0) 
		front = size - 1 ; 

	else 
		front = front-1; 

	arr[front] = key ; 
} 

void insertrear(int key){ 
	if (isFull()){ 
		cout << " Overflow\n " << endl; 
		return; 
	} 
	if (front == -1){ 
		front = 0; 
		rear = 0; 
	} 
	else if(rear==size-1) 
		rear=0; 

	else
		rear = rear+1; 
		
	arr[rear] = key ; 
} 

void deletefront(){ 
	if (isEmpty()){ 
		cout << "Queue Underflow\n" << endl; 
		return ; 
	} 

	if (front == rear){ 
		front = -1; 
		rear = -1; 
	} 
	else{
		if (front == size -1) 
			front = 0; 

		else  
			front = front+1; 
	}
} 

void deleterear(){ 
	if (isEmpty()){ 
		cout << " Underflow\n" << endl ; 
		return ; 
	} 

	if (front == rear){ 
		front = -1; 
		rear = -1; 
	} 
	else if (rear == 0) 
		rear = size-1; 
	else
		rear = rear-1; 
} 

int getFront(){ 
	if (isEmpty()){ 
		cout << " Underflow\n" << endl; 
		return -1 ; 
	} 
	return arr[front]; 
} 

int getRear(){  
	if(isEmpty() || rear < 0){ 
		cout << " Underflow\n" << endl; 
		return -1 ; 
	} 
	return arr[rear]; 
} 

int main(){ 
	insertrear(5); 
	insertrear(10); 
	
	cout<<getRear()<<endl; 
	
	deleterear(); 
	cout<<getRear()<<endl; 

    insertfront(15); 

	cout<<getFront()<<endl; 

	deletefront(); 

	cout<<getFront()<<endl; 
	return 0; 
} 
