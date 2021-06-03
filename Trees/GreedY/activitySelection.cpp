#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
int main(){

    int start,end;
    int n;
    cin>>n;
    vector<vector<int>> atvs;

    for(int i=0;i<n;i++){
        cin>>start;
        cin>>end;
        atvs.push_back({start,end});
    }
    sort(atvs.begin(),atvs.end(),[&](vector<int> &a,vector<int> & b){
        return a[1] < b[1];
    });
    int count =1;
     end = atvs[0][1];
     for(int i=1;i<n;i++){
         if(atvs[i][0]>end){
             count++;
         }
     }
     cout<<count;
    return 0;
}