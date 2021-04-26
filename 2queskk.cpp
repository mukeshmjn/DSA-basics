#include <bits/stdc++.h>
using namespace std;
  
// Function to check the type of the array
void checkType(int arr[], int n)
{
  
    // If the first two and the last two elements
    // of the array are in increasing order
    if (arr[0] <= arr[1] && arr[n - 2] <= arr[n - 1])
        cout<<"0";
  
    // If the first two and the last two elements
    // of the array are in decreasing order
    else if (arr[0] >= arr[1] && arr[n - 2] >= arr[n - 1])
        cout << "Decreasing";
  
    // If the first two elements of the array are in
    // increasing order and the last two elements
    // of the array are in decreasing order
    else if (arr[0] <= arr[1] && arr[n - 2] >= arr[n - 1])
        cout << "Increasing then decreasing";
  
    // If the first two elements of the array are in
    // decreasing order and the last two elements
    // of the array are in increasing order
    else
        cout << "Decreasing then increasing";
      
}
  
// Driver code
int main()
{
    int arr[] = { 1, 2, 3, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
  
    checkType(arr, n);
  
    return 0;
}