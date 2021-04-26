#include<iostream>
using namespace std;

int friendsPair(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    return friendsPair(n-1) + friendsPair(n-2)*(n-1);
}
int main(){
    cout<<friendsPair(4);
    return 0;
}