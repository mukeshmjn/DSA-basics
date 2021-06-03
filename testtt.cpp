#include<iostream>
using namespace std;
int main(){

    int a[] = {2,4,5,7,1,8,9};
    int sum = 0;
    for(int i=0;i<6;i++){
        if(a[i]%2==1){
            sum=sum+a[i];
        }
    }
    cout<<sum;

    return 0;
}