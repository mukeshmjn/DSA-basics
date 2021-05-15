#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){

    int n;
    cin>>n;
    int target ;
    cin>>target;
    vector<int> arr(n);
    for(auto &i: arr){
        cin>>i;
    }
    bool isFound = 0;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        int lo = i+1;
        int hi = n-1;
        while(lo < hi){
            int ans = arr[i] + arr[lo] + arr[hi];
            if(ans<target){
                lo++;
            }
            else if(ans==target){
                isFound = true;
                break;
            }
            else{
                hi++;
            }
        }
    }
    if(isFound){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

    return 0;
}