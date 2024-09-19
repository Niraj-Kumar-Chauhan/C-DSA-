#include<iostream>
using namespace std;
int x=10;  // Global variabal declearation 
void global(){
    cout<<"x = "<<x<<endl;
}
int main(){
    global();
    cout<<"x = "<<x<<endl;
    return 0;
}