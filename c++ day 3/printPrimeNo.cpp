#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     int m;
    cin>>m;
    for(int i=n;i<=m;i++){
        int j;
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            cout<<j<<"\t";
        }
    } 
    return 0;
}