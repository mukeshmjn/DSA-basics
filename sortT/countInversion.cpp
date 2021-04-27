#include<iostream>
using namespace std;

int merge(int arr[],int l,int mid, int r){


}
int mergeSort(int arr[],int l,int r){
    int inv =0;
    if(l<r){
        int mid = (l+r)/2;
      inv += mergeSort(arr,l,mid);
      inv +=   mergeSort(arr,mid+1,r);
      inv +=   merge(arr,l,mid,r);
    }
    return inv;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<mergeSort(arr,0,n-1);
    return 0;
}