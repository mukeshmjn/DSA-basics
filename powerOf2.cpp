#include<iostream>
using namespace std;

bool powerOf2(int n){
    return !(n & (n&n-1));
}
int main(){

    //cout<<powerOf2(3);
    if(powerOf2(16)){
        cout<<"Is powr of 2";
    }
    else{
        cout<<"Is not a power of 2";
    }
    return 0;
}