#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = "yxw";
    string str1 = "YXW";

   // sort(str.begin(),str.end());
    // getline(cin,str);
    // cout<<str;
    // string str1(5,'n');
    // cout<<str1<<endl;
    // string str = "mukes mjn";
    // cout<<str;
    // string strr = "esh";
    // str.append(strr);
    // str.clear();
    for(int i=0;i<str.size();i++){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]-=32;
        }
    }

    for(int i=0;i<str1.size();i++){
        if(str1[i]>='A'&&str1[i]<='Z'){
            str1[i]+=32;
        }
    }
    cout<<str<<endl;
    cout<<str1<<endl;

    string str2 = "abc";
    transform(str2.begin(),str2.end(),str2.begin(),::toupper);
    cout<<str2;
    return 0;
}