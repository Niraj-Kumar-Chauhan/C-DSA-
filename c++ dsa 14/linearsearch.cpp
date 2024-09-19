#include<iostream>
using namespace std;
int linearSearch(int arr[],int size, int targate){
    for(int i=0; i<size; i++){
        if(arr[i]==targate){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={2,5,6,3,8,9,1,7};
    int seze=8;
    int targate;
    cout<<"enter a number : ";
    cin>>targate;
    cout<<linearSearch(arr,8,targate);
    return 0;
}