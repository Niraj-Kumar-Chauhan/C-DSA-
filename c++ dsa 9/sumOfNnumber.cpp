#include<iostream>
using namespace std;
int  sumOfNnum(int n){
    int sum=0;
    for(int i=1; i<=n; i++ ){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
   cout<<"sum = "<<sumOfNnum(n)<<endl;
    return 0;
}