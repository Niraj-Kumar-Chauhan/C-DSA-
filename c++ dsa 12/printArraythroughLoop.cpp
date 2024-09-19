#include<iostream>
using namespace std;
int main(){
    int marks[]={84,67,95,74,75,90};
    int size=6;
    cout<<"size of marks = "<<sizeof(marks)/sizeof(int)<<endl;
    //loop : 0 to size-1
    for(int i=0; i<size; i++){
        cout<<marks[i]<<endl;
    }
    return 0;
}