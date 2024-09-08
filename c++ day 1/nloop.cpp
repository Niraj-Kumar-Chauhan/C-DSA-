#include<iostream>
using namespace std;

int main(){
    int amount;
    cin>>amount;
    if(amount>=5000){
        if(amount>=10000){
            cout<<"roadtrip with NEHA";
        
        }else{
            cout<<"shoping with surbhi";
        }
    }else if(amount>2000){
           cout<<"roadtrip with friends";
    }else{
        cout<<"not go where";
    }
    return 0;
}