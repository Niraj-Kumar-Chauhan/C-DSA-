#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[9]={48,34,-155,12,66,87,44,34,21};
    int greatest=INT_MIN;
    for(int i=1; i<9; i++){
         greatest=max(arr[i],greatest);
    }
    cout<<"Greatest No. is : "<<greatest;
    return 0;
}