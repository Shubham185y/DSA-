#include<iostream>
using namespace std;

void update(int  **p){
    p = p+1; //kuch nahi hoga bcz of pass by value!
    *p =*p+1;
    **p =**p+1;
}

int main(){

    int a =5;
    int *b =&a;
    int **c = &b;

    //  cout<<"a"<<" "<<a<<endl;
    //  cout<<"b"<<" "<<b<<endl;
    //  cout<<"c"<<" "<<c<<endl;
    //  cout<<"&a"<<" "<<&a<<endl;
    //  cout<<"&b"<<" "<<&b<<endl;
    //  cout<<"&c"<<" "<<&c<<endl;
    //  cout<<"*b"<<" "<<*b<<endl;
    //  cout<<"*c"<<" "<<*c<<endl;
    update(c);

    return 0;
}