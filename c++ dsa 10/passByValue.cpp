#include<iostream>
using namespace std;
int sum(int a, int b){
    a=a+4; //8
    b=b+5; //12
    return (a+b); //20
}
int main(){
    int a=4;
    int b=7;
    cout<<sum(a,b)<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}