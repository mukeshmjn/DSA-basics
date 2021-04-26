#include<iostream>
using namespace std;

int firstocc(int arr[],int n,int i,int k){
       if(i==n){
        return -1;
    }
    if(arr[i]==k){
        return i;
    }
 
    return firstocc(arr,n,i+1,k);
}

int lastocc(int arr[],int n,int i,int k){
        if(i==n){
        return -1;
    }
   int restArray = lastocc(arr,n,i+1,k);
   if(restArray!=-1){
       return restArray;
   }
   if(arr[i]==k){
       return i;
   }
   return -1;
}

int main(){

    
    return 0;
}