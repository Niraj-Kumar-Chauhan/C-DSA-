#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[9]={48,34,-21,12,-66,87,-44,34,21};
    int smallest =INT_MAX;
    for(int i=1; i<9; i++){
        //  if(arr[i]<=smallest)
        //  smallest=arr[i];
       smallest= min(arr[i],smallest);
    }
    cout<<"smallest No. is : "<<smallest;
    return 0;
}