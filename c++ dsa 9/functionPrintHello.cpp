#include<iostream>
using namespace std;
//function definition
int  printHello(){
    cout<<"Hello"<<endl;
    return 4;
}
int main(){
   // cout<<printHello(); //function call , print--> Hello , 4
    int val=printHello(); //function call/invoke , print--> Hello, val=4;
   cout<<"val = "<<val<<endl;
    return 0;
}