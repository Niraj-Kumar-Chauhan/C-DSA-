#include<iostream>
using namespace std;
int main(){
    int marks[5]={39,56,78,80,94};
    marks[0]=99;//we can change value of array after the given initial value
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    return 0;
}