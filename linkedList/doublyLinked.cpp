#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void insertAtHead(node* &head,int val){
node* n= new node(val);
n->next=head;
if(head!=NULL){
head->prev=n;
}

head=n;
}

void deleteAtHead(node* &head){
        node* toDelete = head;
    head = head->next;
    head->prev=NULL;
    delete toDelete;
}


void deletion(node* &head,int pos){
if(pos==1){
    deleteAtHead(head);
}
    node* temp =head;
    int count=1;
    while(temp!=NULL&&count!=pos){
        temp=temp->next;
        count++;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL){
    temp->next->prev=temp->prev;
    }
   
    delete temp;
}
void display(node* head){

node* temp=head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
cout<<endl;
}
void insertAtTail(node* &head,int val){
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    node* n=new node(val);
    node* temp =head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}   

int length(node* head){
   node* temp =head;
   int l=0;
   while(temp!=NULL){
       l++;
       temp=temp->next;
   }
   return l;
}

node* merge(node* head1, node* head2){
    node* p1 = head1;
    node*p2 = head2;
    node* dummyNode = new node(-1);
    node* p3 = dummyNode;
    while(p1!=NULL&&p2!=NULL){
        if(p1->data<p2->data){
            p3->next=p1;
            p1=p1->next;
        }
    }
 }
node* kappend(node* &head,int k){
    node* newHead;
    node* newtail;
    node* tail=head;
    int l=length(head);
    k=k%l;
    int count=1;
    while(tail->next!=NULL){
        if(count==l-k){
            newtail=tail;
        }
        if(count==l-k+1){
            newHead = tail;
        }
        tail=tail->next;
        count++;
    }
    newtail->next = NULL;
    tail->next = head;
    return newHead;

}
int main(){

    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    insertAtHead(head,0);
    deletion(head,2);
    deleteAtHead(head);
    display(head);
    return 0;
}