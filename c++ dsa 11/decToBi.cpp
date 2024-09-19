#include<iostream>
using namespace std;
int decToBi(int decNum){ 
    int ans=0;
    int pow=1;
    while(decNum>0){
        int  rem=decNum%2;
          decNum=decNum/2;
          ans=ans+(rem*pow);
          pow=pow*10;

    }
    return ans;
}
int main(){
    int m;
    cout<<"enter first number : ";
    cin>>m;
    int n;
    cout<<"enter second number : ";
    cin>>n;
    for(int i=m;i<=n; i++){
        cout<<"Binary No. = "<<decToBi(i)<<endl;
    }
    return 0;
}