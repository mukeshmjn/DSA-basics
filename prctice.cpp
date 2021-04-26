#include<iostream>
using namespace std;

int getBit(int n,int pos){
    //n = n<<pos;
    return ((n&(1<<pos))!=0);
}

int setBit(int n,int pos){
    return ((n|1<<pos));
}

int clearBit(int n, int pos){
int mask=~(1<<pos);
// mask = mask<<pos;
return (n&mask);
}

int main(){

    //cout<<getBit(6,1);
    // cout<<setBit(5,1);
  int num = 0101;
  cout<<num; 
//    cout<<clearBit(5,2);
    return 0;
}