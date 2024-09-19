#include<iostream>
using namespace std; // pass by value:--> copy of argument is pass to function
void changeX(int x){
     x=2*x;
     cout<<"x = "<<x<<endl;
}
int main(){
    int x=5;
    changeX(x);
    cout<<"x = "<<x<<endl;
    return 0;
}