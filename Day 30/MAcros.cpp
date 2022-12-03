//Macros , Global Variable, INline function & Default args
// 2reason to use macro : it can't be change by mistake , it doesnt take memory it replace the value of macro by macro before compile time
//MACRO: A piece of code in a progra that is replaced by value of macro 
#include<iostream>
// "#include" is a preprocessor directive
using namespace std;
#define PI 3.14 ; //Creation of Macro

int score =15; // Global Variable : It can be accessed in any function ; Not to use Bad Practice
// Instead use refernce Variable ; Dis: it can be changed by any function.



inline int getmax(int&a, int&b){
    return (a>b)?a:b;
};
// it increase readability and performance(like macros), it will work perfectly fine with 1line and may work for 2-3 line and won't work on more than 3 line for sure!

//Default Argument : it mean it is optional and it is started from right most
  // void print(int arr[], int n , int start =0) here it is started from start =0 it is optional ! 

int main(){



int a = 1, b=2;
int ans;
ans = getmax(a,b);
cout<<ans<<endl;





    return 0;
}