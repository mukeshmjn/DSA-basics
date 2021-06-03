#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="jaja";
    bool flg=false;
    for(int i=0;i<s.length();i++){
        flg=false;
        for(int j=0;j<s.length();j++){
            if(s[i]==s[j]&&i!=j){
                flg=true;
                break;
            }
            if(j==s.length()-1&&flg==false){
                cout<<"false";
                return 0;
            }
        }
    }
    if(flg)
    cout<<"true";
    else
    cout<<"false";
    return 0;
}


#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int i=1;i<=10;i++){
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
    }
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char> arr1;
    vector<char> arr2;
    vector<char> newArr;
    int arr1Size,arr2Size;
    cin>>arr1Size;
    cin>>arr2Size;
    char temp;
    for(int i=0;i<arr1Size;i++){
        cin>>temp;
        arr1.push_back(temp);
    }
    for(int i=0;i<arr2Size;i++){
          cin>>temp;
        arr2.push_back(temp);
    }
    int i=0,j=0;

    while(i<arr1.size()&&j<arr2.size()){
        newArr.push_back(arr1[i]);
        newArr.push_back(arr2[j]);
        i++;j++;
    }
    while(i<arr1.size()){
        newArr.push_back(arr1[i]);
        i++;
    }
     while(j<arr2.size()){
        newArr.push_back(arr2[j]);
        j++;
    }
    for(int k=0;k<newArr.size();k++){
        cout<<newArr[k]<<" ";
    }

}

#include<iostream>
using namespace std;
int main(){
    int num=69;
    while(num<=77){
        if(num%7==0&&num%11!=0){
            cout<<"Raja"<<endl;
        }
        else if(num%11==0&&num%7!=0){
            cout<<"Software"<<endl;
        }
        else if(num%7==0 && num%11==0){
            cout<<"Not a valid output"<<endl;
        }
        else{
            cout<<num<<endl;;
        }
        num++;
    }


    return 0;
}

#include<iostream>
#include <math.h>
using namespace std;
int main(){
    int num;
cin>>num;
if((5*num*num + 4)==(sqrt(5*num*num + 4)*sqrt(5*num*num + 4)) || (5*num*num - 4)==(sqrt(5*num*num - 4)*sqrt(5*num*num - 4))){
    cout<<num;
}
else{
    int sum = 0;
    for(int i=2;i<num;i=i+2){
        if((5*i*i + 4)==(sqrt(5*i*i + 4)*sqrt(5*i*i + 4)) || (5*i*i - 4)==(sqrt(5*i*i - 4)*sqrt(5*i*i - 4))){
        sum = sum+i;
    }
   
    }
     cout<<sum;
}


    return 0;
}

