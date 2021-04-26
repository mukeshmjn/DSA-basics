#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    char arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
//    for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    bool check = 1;
    for(int i=0;i<n;i++){
      if(arr[i] != arr[n-i-1]){
          check = 0;
          break;
      }
    }
    if(check){
        cout<<"Pallindrome";
    }
    else{
        cout<<"Not pallindrome";
    }
    return 0;
}