#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<"max number is 23"<<a;
        }else{
            cout<<"max number is "<<c;
        }
    }else{
        if(b>c){
            cout<<"max number is "<<b;
        }else{
            cout<<"max number is "<<c;
        }
    }
    return 0;
}