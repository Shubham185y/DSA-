#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next ;
    Node* prev ;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }

};
insertAtHead(Node* &head, int data){
    if(head == NULL){
        
    }
    Node* temp = new Node(data);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}
insertAtPosition(Node* &head, Node* &tail, int position , int data){
    Node* temp = head;
    int count =1;
    if(position ==1){
        insertAtHead(head, data);
        return;
    }

    while(count<position-1){
        temp = temp -> next;
        count ++;
    }
    if(temp -> next ==NULL){
        insertAtTail(tail, data);
        return;
    }
    Node* ntbi = new Node(data);
    ntbi -> next = temp -> next;
    temp -> next -> prev = ntbi;
    ntbi -> prev = temp;
    temp -> next = ntbi;

}
insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){

Node* node1 = new Node(1);
Node* head = node1;
Node* tail = node1;
insertAtTail(tail,2);
insertAtTail(tail,3);
insertAtTail(tail,4);
insertAtTail(tail,5);
insertAtPosition(head,tail, 3, 9);
print(head);
// cout<<"head "<<head ->data<<endl;
// cout<<"tail "<<tail ->data<<endl;

    return 0;
}