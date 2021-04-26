#include<iostream>
using namespace std;
int gcd(int a,int b){
    while(b!=0){
        a=b;
        b= a%b;


    }
    return a;
}
int main(){

    cout<<gcd(6,4);

    return 0;
}