#include<iostream>
using namespace std;
int linear(int arr[], int n , int key){
    if(n==0){
        return 0;
    }
    if(arr[0] == key){
        return true;
    }
    else{
        return linear(arr+1, n-1,key );
    }
    
}



int main(){

    int arr[4]={1,3,6,2};
    int n = 4;
    int key = 2;
    linear(arr,n,key);
if(linear){
    cout<<"present"<<endl;
}
else{
    cout<<"absent"<<endl;
}


    return 0;

}