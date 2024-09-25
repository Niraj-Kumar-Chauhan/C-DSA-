#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(43);
    vec.push_back(43);
    vec.push_back(43);
    cout<<"size of vec = "<<vec.size()<<endl;
    cout<<"capacity of vec "<<vec.capacity()<<endl;
    
    return 0;
}