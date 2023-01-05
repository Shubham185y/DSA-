#include<iostream>
using namespace std; 

class Node{
public:
int data;
Node* next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int data){
    //creation of new node

    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}
void insertAtTail(Node* &tail, int data){
    //creationnn 
    Node* temp = new Node(data);
    tail ->next =temp;
    tail = tail -> next;
}
void insertAtPosition(Node* &head,Node* &tail, int position, int d){
    if(position ==1){
        insertAtHead(head, d);
        return;
    }
    Node* temp =head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }
    if(temp -> next == NULL){
        insertAtTail(tail, d);
        return;
    }
    Node* ntbi = new Node(d);
    ntbi -> next = temp -> next;
    temp -> next = ntbi ;
}

void printll(Node* &head){
    Node* curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
        cout<<endl;
}

int main(){
Node* node1 = new Node(10);
// cout<<node1->data <<endl;
// cout<<node1->next <<endl;

Node* head = node1;
Node* tail = node1;
insertAtTail(tail, 1);
insertAtTail(tail, 2);
insertAtTail(tail, 3);
insertAtTail(tail, 4);
insertAtPosition(head,tail, 6, 7);
printll(head);
cout<<"head"<<head->data<<endl;
cout<<"tail"<<tail->data<<endl;
    return 0;
}