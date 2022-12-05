#include<iostream>
using namespace std;

int binary(int arr[], int s, int e, int k){
if(s>e){
    return false;
}
int mid =s +(e-s)/2;
if(arr[mid]==k){
    return true;
}
if(arr[mid]<k){
    return binary(arr, mid+1,e ,k);
}
else{
    return binary(arr, s,mid-1 ,k);
}
}

int main(){
    int arr[4]={1,3,4,5};
    int s =0;
    int e = 3;
    int k =3;
   cout<< binary(arr, s,e, k)<<endl;


    return 0;
}