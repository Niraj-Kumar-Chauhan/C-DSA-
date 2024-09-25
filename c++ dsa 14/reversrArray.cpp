#include<iostream>
using namespace std;
void reverseArray(int arr[], int sz){
    int start = 0, end=sz-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[]={4,5,35,7,12,99,6,23,45,23};
    int sz=10;
    reverseArray(arr, 10);
    for(int i=0; i<sz; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}