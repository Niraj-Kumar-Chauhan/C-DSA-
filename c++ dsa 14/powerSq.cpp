#include<iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of going to Nth Number of term : ";
    cin>>n;
    int m;
    cout<<"enter the number of square : ";
    cin>>m;
    int num=1;
    for(int i=1; i<=n; i++){
        for(int j=i; j<i+1; j++){
             num=num*m;
        }
        cout<<num<<"  ";
    }
    return 0;
}