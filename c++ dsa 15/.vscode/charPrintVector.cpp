#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char>vec={'A','B','C','D'};
    cout<<"size of vec = "<<vec.size()<<endl;
    for(char i : vec){ // for each loop
        cout<<i<<endl;
    }
    return 0;
}