#include<iostream>
using namespace std;
int main(){
    int arr[9]={48,34,-21,12,66,87,-44,34,21};
    int j=0;
    for(int i=1; i<9; i++){
         if(arr[j]<=arr[i]){
             continue;
         }else{
            arr[j]=arr[i];
         }
    }
    cout<<"smallest No. is : "<<arr[j];
    return 0;
}