#include<iostream>
using namespace std;

bool issorted(int arr[], int n){
    if(n==0 || n==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return  issorted(arr + 1 , n-1);
    }
}


int main(){
     int arr[4]={1,2,3,4};
     int n = 4;
     bool ans = issorted(arr,n);
     if(ans)
     cout<<"sorted "<<endl;
     else
     cout<<"Unsorted "<<endl;


    return 0;
}