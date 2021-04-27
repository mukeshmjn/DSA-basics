#include<iostream>
using namespace std;

class mukeshmJn{

    public: 
    void func(){
        cout<<"I am a function with no args"<<endl;
    }
      void func(int ar){
        cout<<"I am a function with int args"<<endl;
    }
      void func(double ar){
        cout<<"I am a function with double args"<<endl;
    }
};


int main(){

    mukeshmJn obJe;
    obJe.func();
    obJe.func(2);
    obJe.func(4.66);

    return 0;
}