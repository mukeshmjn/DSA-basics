#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(0);
    for(auto i: dq){
        cout<<i<<" ";
    }

    return 0;
}