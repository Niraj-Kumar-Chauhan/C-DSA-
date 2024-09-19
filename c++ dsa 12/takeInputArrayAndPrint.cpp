#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int marks[n];
    int size=n;
    cout<<"enter marks in array : ";
    for(int i=0; i<size;i++){
        cin>>marks[i];
    }
    cout<<" \n";
    cout<<"size of marks is : "<<sizeof(marks)/sizeof(int);
    cout<<"\n";
    cout<<"\n";
    for(int j=0; j<size; j++){
        cout<<marks[j]<<" "<<endl;
    }
    return 0;

}