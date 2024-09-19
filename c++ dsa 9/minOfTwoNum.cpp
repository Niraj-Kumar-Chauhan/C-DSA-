#include<iostream>
using namespace std;
double minimum(double a, double b){ //parameter--> it is a copy of argument
    if(a<b){
        return a;
    }else{
        return b;
    }

}
int main(){
    cout<<"minimum number is "<<minimum(49.8,49.5)<<endl; //minimum(74,84)--> arguments -->it is actual value 
    return 0;
}