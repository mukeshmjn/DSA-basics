#include<iostream>
using namespace std;

void waveSort(int arr[],int n){
    int i=1;
    while(i<n-2){
        if(arr[i]>arr[i-1]){
            swap(arr[i],arr[i-1]);
        }
         if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
        i+=2;
    }
}
int main(){

    int arr[] = {1,3,4,7,5,6,2};
    waveSort(arr,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}