#include<iostream>
using namespace std;
int incexc(int n,int a, int b){
    int c1 = n/a;
    int c2 = n/b;
    int c3 = n/(a*b);
    return c1+c2-c3;
}
int main(){

    cout<<incexc(40,5,7);
    return 0;
}