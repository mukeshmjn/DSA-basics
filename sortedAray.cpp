#include<iostream>
using namespace std;
bool sorted(int arr[],int n){

    if(n==1){
        return 1;
    }

    bool sort = sorted(arr+1,n-1);
    return (arr[0]<arr[1] && sort);
}

int main(){
    int arr[] = {1,2,3,4,5,9,7};
    int n=7;
    cout<<sorted(arr,n);

    return 0;
}