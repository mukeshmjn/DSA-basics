#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next = NULL;
    }

};

void insertAtTail(node* &head, int val){
    
    node* n =new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp =temp->next;
    }
    temp->next=n;

}

void deleteAthead(node* &head){
    node* toDelete = head;
    head=head->next;
    delete toDelete;
}
void deleteNode(node* &head,int val){

    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        head=NULL;
    }
    node* temp = head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

void insertAtHead(node* &head,int val){
    node* n =new node(val);
    n->next=head;
    head=n;
}

void display(node* head){
node* temp =head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
cout<<endl;
}

bool Search(node* head,int k){
node*temp =head;
while(temp!=NULL){
    if(temp->data==k){
        return 1;
    }
    temp = temp->next;
}
return 0;
}

node* reverse(node* &head){

    node* prevptr =NULL;
    node* currptr = head;
    node* nextptr;
    while(currptr!=NULL){
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr =nextptr; 
    }
    return prevptr;
}

node* reverseRecursive(node* &head){
    if(head == NULL || head->next==NULL){
        return head;
    }
    node* newHead = reverseRecursive(head->next);
    head->next->next = head;
    head->next =NULL;
    return newHead;
}

node* reverseK(node* &head,int k){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    int count =0;
    while(currptr!=NULL&&count<k){
        nextptr=currptr->next;
        currptr->next = prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
        head->next = reverseK(nextptr,k);
    }
    return prevptr;
}

void makeCycle(node* &head,int pos){
    node* temp = head;
    node* startnode;
    int count=1;
    while(temp->next!=NULL){
        
        if(count==pos){
        startnode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next = startnode;
}

bool detectCycle(node* &head){
    node *slowptr=head;
    node *fastptr=head;
    while(fastptr!=NULL && fastptr->next!=NULL){
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
        if(fastptr==slowptr){
            return true;
        }
    }
    return false; 
}

void removeCycle(node* &head){
    node* slowptr=head;
    node* fastptr=head;
    do
    {
        slowptr=slowptr->next;
        fastptr=fastptr->next->next;
    } while (slowptr!=fastptr);
    fastptr=head;
    while(slowptr->next!=fastptr->next){
        slowptr=slowptr->next;
        fastptr=fastptr->next;
    }
    slowptr->next =NULL;

    
}

int main(){
    node* head=NULL;
    insertAtTail(head,2);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtHead(head,1);
    makeCycle(head,2);
   // display(head);
   cout<<detectCycle(head)<<endl;
   removeCycle(head);
   cout<<detectCycle(head)<<endl;
   display(head);
   // deleteNode(head,4);
 //  node* newHead = reverseRecursive(head);
//  int k=3;
//  node* newHead = reverseK(head,k);
//     display(newHead);
    // cout<<Search(head,4);
    return 0;
}