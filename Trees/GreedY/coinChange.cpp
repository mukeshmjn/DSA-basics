#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    int arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int ans =0;
    for(int i=0;i<10;i++){
        ans = ans + x/arr[i];
        x-=x/arr[i]*arr[i];
    }
    cout<<ans;

    return 0;
}