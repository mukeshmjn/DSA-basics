#include<iostream>
using namespace std;

int power(int n,int p){
    if(p==0){
        return 1;
    }
    int prevPow = power(n,p-1);
    return n*prevPow;
}
int main(){

    cout<<power(4,4);

    return 0;
}