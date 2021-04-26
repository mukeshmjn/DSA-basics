#include<iostream>
using namespace std;
int main(){

    int n;
    int i=0;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    int currLen = 0, maxLen = 0;
    while(1){
        if(arr[i] == ' ' || arr[i] =='\0'){
            if(currLen > maxLen){
                maxLen = currLen;

            }

        }
        else{
            currLen++;
        }
        if(arr[i]=='\0')
        break;
        i++;
    }
    //cout<<arr;
    cout<<maxLen;
    return 0;
}