#include<iostream>
using namespace std;

// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     cout<<arr<<endl;
//     cout<<arr[0]<<endl;
//     cout<<*arr + 2<<endl;
//     cout<< *(arr +1)<<endl;
//     cout<<*(arr)+1<<endl;   //arr[i]=*(arr + i)   #formula  OR  i[arr] = *(i + arr)
//     // arr[i] can also be written as i[arr]
//     return 0;
// }

// Difference bt ptr & arr
// int main(){
//     int temp[10];
//     int *ptr = &temp[0];
//     cout<<sizeof(temp)<<endl;
//     cout<<sizeof(ptr)<<endl;// it will give 8 bcause of address it is right in online compiler
//     return 0;
// }

int main(){
    int arr[4]={1,2,3,4};
    int s =4;
    int *a=&s;
    int *p =&arr[2];
    cout<<p<<endl;
    cout<<a<<endl;

}

// int main(){
//     int arr[5];
//     char ch[4]={"abc"};
//     cout<<arr<<endl;
//     cout<<ch[3]<<endl;
// }