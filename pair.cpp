#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool myCompare(pair <int,int> p1, pair<int,int> p2){
return p1.first<p2.first;
}

int main(){
    int arr[]= {10,16,7,14,5,3,12,9};
    vector <pair<int,int>> p;
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        // pair<int,int> p;
        // p.first =arr[i];
        // p.second = i;
        p.push_back(make_pair(arr[i],i));
    }
    sort(p.begin(),p.end(),myCompare);
    for(int i=0;i<p.size();i++){
        arr[p[i].second] =i;

    }
     for(int i=0;i<p.size();i++){
        cout<<arr[i]<<endl;
        
    }
    return 0;
}