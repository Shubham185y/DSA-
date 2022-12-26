#include<iostream>
#include<string>
using namespace std;


/* { class Solution {
public:
    int fib(int n) {
        if(n==0){
            return 0;
        }
        if(n ==1){
            return 1;
        }
        
        int ans = fib(n-1) + fib(n-2);
        return ans;
    }
};}*/

void saydigit(int n){
    string array[10] ={"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
     if(n==0){
        return;
     }
     int digit  = n % 10;
     n =n/10;
     saydigit(n);
     cout<<array[digit]<<" ";

}



int main(){
    int n;
    cin>>n;
    saydigit(n);
    
    }