#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    cout<<"size of vec = "<<vec.size()<<endl;
    vec.push_back(34);
    cout<<"after push back size of vec = "<<vec.size()<<endl;
    for(int i : vec){
        cout<<i<<endl;
    }
    return 0;
}