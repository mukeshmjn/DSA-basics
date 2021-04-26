#include<iostream>
using namespace std;

string removeDupe(string s){
if(s.size()==0){
    return "";
}
char ch = s[0];
string rem = removeDupe(s.substr(1));
if(ch == rem[0]){
    return rem;
}
else{
    return ch+rem;
}
}
int main(){
    cout<<removeDupe("aaaabbbbccccddddeee");

    return 0;
}