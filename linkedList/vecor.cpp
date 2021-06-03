#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>aa(5);
    for(int &x: aa){
        cin>>x;
    }
    for(int x: aa){
        cout<<x;
    }
    return 0;
}