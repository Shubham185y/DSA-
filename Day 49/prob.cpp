
// approach 1 by data replacement 
 Node* sortList(Node *head)
{
    // Write your code here.
    Node* curr = head;
    int one = 0;
    int zero = 0;
    int two = 0;
    while(curr !=NULL){
        if(curr -> data == 0){
            zero++;
        }
         else if(curr -> data == 1){
            one++;
         }
         else if(curr -> data == 2){
            two++;
         }
        curr = curr -> next;
    }
    curr = head; 
    while (curr!= NULL){
        if(zero   != 0 ){
            curr -> data = 0;
            zero--;
        }
        else if(one != 0){
            curr -> data =1;
            one--;
        }
        else if( two !=0){
            curr->data =2;
            two--;
        }
        curr = curr ->next;
    }
    return head;

}



// approach 2 without replacement by merging lists

/********************************
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

********************************/
void insertattail(Node* &tail, Node* curr){
    tail -> next = curr;
    tail = curr;
}
Node* sortList(Node *head)
{
    // Write your code here.
    Node*curr = head;
    Node* zerohead = new Node(-1);
    Node* zerotail = zerohead;
    Node* onehead = new Node(-1);
    Node* onetail = onehead;
    Node* twohead = new Node(-1);
    Node* twotail = twohead;
    
    while(curr != NULL){
        if(curr -> data ==0){
            insertattail(zerotail,curr);
        }
        else if(curr->data ==1){
            insertattail(onetail,curr);
        }
        else if(curr->data ==2){
            insertattail(twotail,curr);
        }
        curr = curr -> next;
    }
    if(onehead -> next !=NULL){
        zerotail -> next = onehead -> next; 
    }
    else{
        zerotail -> next = twohead -> next; 
    }
    onetail -> next =twohead -> next;
    twotail -> next = NULL;
    head = zerohead -> next;
    delete zerohead;
    delete onehead;
    delete twohead;
    return head;
}
