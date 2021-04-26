#include<iostream>
using namespace std;
int countPathmaze(int n,int i,int j){
    if(i==n-1&&j==n-1){
        return 1;
    }
    if(i>n||j>n){
        return 0;
    }
    return countPathmaze(n,i+1,j)+countPathmaze(n,i,j+1);
}
int main(){
    cout<<countPathmaze(3,0,0);
    return 0;
}