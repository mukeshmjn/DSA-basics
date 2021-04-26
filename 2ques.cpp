
#include <bits/stdc++.h>
using namespace std;
  

void checkType(int arr[], int n)
{

    if (arr[0] < arr[1] && arr[n - 2] < arr[n - 1])
       cout<<"1";
  
    
    else if (arr[0] > arr[1] && arr[n - 2] > arr[n - 1])
        cout<<"-1";
 else if (arr[0] < arr[1] && arr[n - 2] > arr[n - 1])
        cout<<"0";
  else if (arr[0] ==arr[1]&& arr[n - 2] == arr[n - 1])
  cout<<"2";
  
    else
       cout<<"0";
}
  

int main()
{
    int n;
    cout<<"Enter size of array";
    cin>>n;
    
    int arr[n];
    cout<<"Enter "<<n<<" elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
 
  
    checkType(arr, n);
  
    return 0;
}