#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    /*q.push(12);
    q.push(3);
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;*/
    
    return 0;
}

/*
#include <bits/stdc++.h> 
class Queue {
    int* arr;
    int size;
    int qfront;
    int qrear;
public:
    Queue() {
         size =100001;
        arr = new int[size];
        qfront=0;
        qrear =0;
        
    }

    ----------------- Public Functions of Queue -----------------

    bool isEmpty() {
        // Implement the isEmpty() function
        if(qfront ==qrear){
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(qrear ==size){
            cout<<"size full"<<endl;
            
        }
        else{
            arr[qrear] = data;
            qrear++; 
        }
       
    }

    int dequeue() {
        // Implement the dequeue() function
        if(qfront == qrear){
            return -1;
        }
        else{
            int ans = arr[qfront];
            arr[qfront]=-1;
            qfront++;
            if(qfront==qrear){
                qfront=0;
                qrear=0;
            }
            return ans;
        }
    }

    int front() {
        // Implement the front() function
        if(qfront == qrear){
            return -1;
        }
        else{
            return arr[qfront];
        }
    }
};
 */
 /*
 
 #include <bits/stdc++.h> 
class CircularQueue{
    int *arr ;
    int size;
    int front;
    int rear;
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        // Write your code here.
        size=n;
        front = rear = -1;
        arr = new int[size];
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int data){
        // Write your code here.
        if((front == 0 && rear == size -1) || (rear==(front-1) % (size -1) ) ){
            return false;
        }
        else if(front == -1){
            front = rear = 0;
        }
        else if(rear == size-1 && front != 0 ){
            rear = 0;
        }
        else{
            rear ++;
        }
        arr[rear] = data;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // Write your code here.
        if(front== -1 ){
            return -1;
        }
        int ans = arr[front];
        arr[front]=-1;
        if(front == rear){
            front = rear = -1;
        }
        else if(front == size-1){
            front =0;
        }
        else{
            front++;
        }
        return ans;
    }
};
 */