#include<iostream>
using namespace std;


void dnfSort(int arr[],int n){

    int low =0;
    int mid =0;
    int high =n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[high],arr[mid]);
            high--;
        }
    }
}
int main(){
    int arr[] = {1,0,2,1,0,1,2,1,2};
    dnfSort(arr,9);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}