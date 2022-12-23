/*
empty class takes 1 byte memory 
 #include"filename.cpp" also an option

acess modifier:1.Private , 2.Public , 3.Protected










*/
#include<iostream>
using namespace std;

class hero{
    public:
    int health;
    char name[100];
    int geth(){
        return health;
    }
};
int main(){
    hero h1;
    cout<<h1.geth()<<endl;
    return 0;
}