#include<iostream>
using namespace std;
int factN(int n){
    int fact=1;
    for(int i=n; i>0; i--){
        fact=fact*i;
    }
    return fact;
}
int main(){
    cout<<"factorial = "<<factN(5)<<endl;
    cout<<"factorial = "<<factN(6)<<endl;
    return 0;
    
}