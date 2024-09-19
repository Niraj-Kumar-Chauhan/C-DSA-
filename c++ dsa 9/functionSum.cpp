#include<iostream>
using namespace std;
//sum of two number
double sum(double a, double b){
    double s=a+b;
    return s;
}
int main(){
    // cout<<"sum = "<<sum(7.29,35.24)<<endl;
    int n;
    cout<<"enter a number : ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"sum = "<<sum(8.23+i,3.4+i)<<endl;
    }
    return 0;
}