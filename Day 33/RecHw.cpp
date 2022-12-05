#include<iostream>
using namespace std;


int sum(int arr[] , int n){
    
    if(n==0 ){
        return 0;
    }
    if(n==1){
        return arr[0];

    }
    int remaining= sum(arr+1, n-1);
    int som = arr[0] + remaining;
    return som;
}
int main(){

   int arr[3]={1,2,7};
   int n =3;
    int gg = sum(arr,n);
    cout<<gg<<endl;




    return 0;

}