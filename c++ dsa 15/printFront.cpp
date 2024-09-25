#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(34);
    vec.push_back(35);
    vec.push_back(32);
    vec.push_back(37);
    vec.push_back(39);
    cout<<"size of vec = "<<vec.size()<<endl;
    vec.pop_back();
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    
    return 0;
}