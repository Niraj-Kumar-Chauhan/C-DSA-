#include<iostream>
using namespace std;
int sumOfDigit(int num){
    int sum=0;
    int rem=0;
    int divi;
    while((divi*10+rem)!=num){
        rem=num%10;
        num=num/10;
        sum=sum+rem;
    }
    return sum;
}
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    cout<<"sum = "<<sumOfDigit(n)<<endl;
    return 0;
}