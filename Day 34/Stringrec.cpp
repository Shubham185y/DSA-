#include<iostream>
using namespace std;
void rev(int i, int j, string& s){
    if(i>j){
        return;
    }
    
        swap(s[i], s[j]);
        i++;
        j--;
        rev(i,j,s);
    
}

int main(){
 
string name ="shubham";

rev(0,name.length()-1,name);
cout<<name<<endl;





}