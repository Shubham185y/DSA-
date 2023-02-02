/*
reversing the queue
//Function to reverse the queue.
queue<int> rev(queue<int> q)
{
    // add code here.
    stack<int> s;
    while(!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }
    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }
    return q;
}
*/

/*
// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    stack<int> s;
    for(int i=0;i<k;i++){
        int element = q.front();
        q.pop();
        s.push(element);
    }
    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }
    
    int t = q.size()-k;
    while(t--){
        int element = q.front();
        q.pop();
        q.push(element);
    }
    return q;
}
*/

/*
// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    stack<int> s;
    for(int i=0;i<k;i++){
        int element = q.front();
        q.pop();
        s.push(element);
    }
    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }
    
    int t = q.size()-k;
    while(t--){
        int element = q.front();
        q.pop();
        q.push(element);
    }
    return q;
}
*/
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
       int start =0;
       int deficeit =0;
       int balance =0;
       for(int i=0;i<n;i++){
           balance += p[i].petrol - p[i].distance;
           if(balance<0){
               deficeit = deficeit +  balance;
               start = i+1;
               balance =0;
           }
       }
       if(deficeit + balance >= 0)
           return start;
           
       
       else{
           return -1;
       }
    }
};

*/