#include<iostream>
using namespace std;

class node{
   
    public:
     int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};

class queue{
node* front;
node* back;

    public:
    queue(){
        front = NULL;
        back = NULL;
    }
    void push(int x){
        node *n = new node(x);
        if(front==NULL){
            front=n;
            back=n;
            return;
        }
       back->next  = n ;
        back = n;
    }
    void pop(){
        if(front == NULL){
            cout<<"Underflow"<<endl;
            return;
        }
        node* todelete = front;
        front = front->next;
        delete todelete;
    }
    int peek(){
          if(front == NULL){
            cout<<"Underflow"<<endl;
            return -1;
        }
        return front->data;
    }
    bool empty(){
           if(front == NULL){
            // cout<<"Underflow"<<endl;
            return 1;
        }
        return 0;
    }
};

int main(){
    queue q;
    // q.push(1);
    q.push(2);
    cout<<q.peek();
    return 0;
}