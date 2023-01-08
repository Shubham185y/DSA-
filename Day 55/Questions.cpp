#include<iostream>
#include<stack>
using namespace std;

int main(){
/*
    //Q1 Reverse a string from stack
    stack<char>s;
    string str = "SHUBHAM";
    string ans =  "";
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        s.push(ch);
    }
    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }
    TC = O(N);SC =O(N);
    cout<<ans<<endl; */

/*
    //Q2 Delete Middle Element From Stack
    #include <bits/stdc++.h> 
void solveRec(stack<int>&inputStack,int count, int size){
    if(count == size/2){
        inputStack.pop();
        return;
    }
 
    int num = inputStack.top();
    inputStack.pop();
    solveRec(inputStack,count+1,size);
    inputStack.push(num);
    
}

void deleteMiddle(stack<int>&inputStack, int N){

   // Write your code here
    int count =0;
    solveRec(inputStack,count,N);
   
}
*/
    /*
    //Q3 Valid Parenthesis VIMP 
    bool isValidParenthesis(string expression)
{
    // Write your code here.
    stack<char> s;
    for(int i=0;i<expression.length();i++){
        char ch = expression[i];
        if((ch=='(') || (ch == '{') || (ch =='[')){
            s.push(ch);
        }
        else{
           
            if(!s.empty()){
                 char t = s.top();
            if((ch == ')' && t =='(') || (ch =='}' && t == '{') || (ch==']' && t=='[')){
                s.pop();
            }
            else{
                    return false;
                }
            }
            else{
                return false;
            }
            
        }
    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
    
}
 */

 /*
    //Q4 Enter  a element at bottom of stack

    #include <bits/stdc++.h> 
void solve(stack<int>& myStack, int x){
    if(myStack.empty()){
        myStack.push(x);
        return;
    }
    int num = myStack.top();
    myStack.pop();
    solve(myStack,x);
    myStack.push(num);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    solve(myStack,x);
    return myStack;
}

 */
/* 
     //Q6 Redundant Bracket
     #include <bits/stdc++.h> 
#include<stack>

bool findRedundantBrackets(string &s)
{
    stack<char>st;
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        if((ch =='(') || (ch =='+') || (ch=='-')||(ch=='*') ||(ch=='/') ){
            st.push(ch);
        }
        else{
            if(ch==')'){
                bool isRedundant = true;
                while(st.top()!='('){
                    char top = st.top();
                    if((top=='+') || (top=='-')||(top=='*')||(top=='/')){
                        isRedundant = false;
                    }
                    st.pop();
                    
                }
                if(isRedundant == true){
                    return true;
                }
                st.pop();
                
            }
           
        }
    }
    return false;
    
    
}
*/
/*
    //Q8 Minimum Cost To Make String Valid
#include <bits/stdc++.h> 
#include<stack>
int findMinimumCost(string str) {
    stack<char>s;
    if(str.length()%2==1){
        return -1;
    }
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        if( ch=='{'){
            s.push(ch);
        }
        else{
            if(!s.empty() && s.top() =='{'){
                s.pop();
            }
            else{
                s.push(ch);
            }
        }
    }
    int a =0; 
    int b = 0;
    
    while(!s.empty() ){
        if(s.top()=='{'){
            b++;
        }
        else{
            a++;
        }
        s.pop();
    }
    int ans = (a+1)/2 + (b+1)/2;
    return ans;
    
}*/
/*
    //Q9 Next Smaller Element 
    #include<stack>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int>s;
    s.push(-1);
    vector<int>ans(n);
    
    for(int i =n-1;i>=0;i--){
        int curr = arr[i];
        while(s.top()>=curr)
        {
            s.pop();
        }
        
        ans[i]=s.top();
        s.push(curr);
    }
    return ans;
}
*/
    return 0;

}

