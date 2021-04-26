#include<iostream>
using namespace std;

void printInc(int n){
    if(n==0){
        return;
    }
     printInc(n-1);
    cout<<n<<endl;
}

void printDec(int n){
   if(n==0){
        return;
    }
        cout<<n<<endl;
     printDec(n-1);

}

int main(){

   // printInc(5);
    printDec(1);
    return 0;
}