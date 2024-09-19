#include<iostream>
using namespace std;
void changeArr(int arr[],int size){
    for(int i=0; i<size; i++){
        arr[i]=2*arr[i];
    }
}
int main(){ 
    int arr[]={1,3,4,5};
    changeArr(arr,4);
    for(int i=0; i<4; i++){
        cout<<arr[i]<<" ";
    }
   return 0;
}