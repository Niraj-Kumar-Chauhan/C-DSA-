#include<iostream>
using namespace std;
int BiToDec(int bin){
    int ans=0;
    int pow=1;
    while(bin>0){
        int rem=bin%10;
        ans=ans+(rem*pow);

        bin=bin/10;
        pow=pow*2;
    }
    return ans;
}
int main(){
    int m;
    cout<<"enter a number : ";
    cin>>m;
    
    cout<<"decimal No. = "<<BiToDec(m)<<endl;
    
    return 0;
}