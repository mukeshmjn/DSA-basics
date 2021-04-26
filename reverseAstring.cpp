#include<iostream>
using namespace std;
void reverseString(string s){
    if(s.size()==0){
        return;
    }
    string restStr = s.substr(1);
    reverseString(restStr);
    cout<<s[0];


    
}
int main(){

    reverseString("Mukesh");
    return 0;
}