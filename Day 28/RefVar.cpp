// Reference variable , staticand dynamic memory allocation
// Reference variable creation int &j = i same mem location with different names!
// Why? pass by reference
// Program starts  it comes with two memory 1. Stack, 2. Heap by deafult all the mem is used is from stack
// to use mem from heap we have to use the new keyword
// Taking size of array on run time is bad practice as it would take mem from stack and stack come with 
// small mem and size of array is greater than the program will crash we should know the size of array at compile time 
// taking size of array at run time is dangerous and a bad practice as well
// also reference function (int & fun(int n){};) and pointer function (int*func(int n){}; ) is a bad practice it will give error 
// When will use mem of stack it is called as static mem allocation
// when we use mem of heap it is called dynamic mem alllocation
//Heap ex:  new char (this will return address from heap); char* ch = new char;   
// Diff bet static and dynamic
// static takes less mem & dynamic take more mem bcz we have to also create a pointer for it in stack to points it in to the heap
// staic allocation memory automatically releases
// dynamic allocation memory release should be done be manually by using delete key word  delete i, delete []arr;
// void  ptr HW
#include<iostream>
using namespace std;

int getsum( int* s, int n ){
    int sum =0;
    for(int i =0;i<n;i++){
        sum+=s[i];
    }
    return sum;
}


int main(){

    int z;
    cin>>z;
    int *arr = new int[z];
    for(int i=0;i<z;i++){
        cin>>arr[i];
    }
    int g = getsum(arr,z);
 cout<< g<<endl;



    return 0;
}