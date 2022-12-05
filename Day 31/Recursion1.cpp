#include<iostream>
using namespace std;

int fact(int n){
    int ans;
    return n==0 ?  1 : n * fact(n-1); 
//     if(n==0){
//         return 1;
//     }
//     else{
//          ans = n * fact(n-1);
//     }
//    return ans;
}

int count(int n){
    if(n==0){
        return 1;
    }
    else{
        count(n-1);
        cout<<n<<endl;
    }
}

int main(){

int n;
cin>>n;
//  cout << fact(n)<<endl;
count(n);
    return 0;
}
