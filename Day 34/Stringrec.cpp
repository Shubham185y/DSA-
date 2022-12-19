#include<iostream>
using namespace std;

bool checkpalindrome(int i, int j , string str){
    if(i>j){
        return true;
    }
    if(str[i] != str[j]){
        return false;
    }
    else{
      return checkpalindrome(i+1,j-1,str);
    }
}

void rev(int i, int j, string& s){
    if(i>j){
        return;
    }
    else{
        swap(s[i], s[j]);
        i++;
        j--;
        rev(i,j,s);
    }
}

int main(){
 
string name ="madam";

rev(0,name.length()-1,name);
cout<<name<<endl;
bool ispalindrome = checkpalindrome(0,name.length()-1,name);
if(ispalindrome){
    cout<<"It is palindrome"<<endl;
}
else{
    cout<<"It is not a palindrome"<<endl;
}




}