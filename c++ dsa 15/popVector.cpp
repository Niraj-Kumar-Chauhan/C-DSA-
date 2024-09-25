#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(23);
    vec.push_back(53);
    vec.push_back(63);
    vec.push_back(93);
    cout<<"size of vec = "<<vec.size()<<endl;
    vec.pop_back(); //delete 95
    cout<<"after pop size of vec = "<<vec.size()<<endl;
    for(int i : vec){
        cout<<i<<endl;
    }
    
    return 0;
}