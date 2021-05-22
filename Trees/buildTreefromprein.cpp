#include<iostream>
using namespace std;

struct Node{
   struct Node* left;
    int data;
    struct Node* right;
    Node(int val){
        data = val;
        right =NULL;
        left =NULL;
    }
};

int search(int inorder[],int start,int end, int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}

Node* buildTree(int inorder[],int preorder[],int start,int end){
   static int idx =0;
//    cout<<idx;
    if(start>end){
        return NULL;
    }
    int curr = preorder[idx];
    idx++;
    Node* newNode = new Node(curr);
     if(start==end){
         return newNode;
    }
    int pos = search(inorder,start,end,curr);
    newNode->left =  buildTree(inorder,preorder,start,pos-1);
    newNode->right = buildTree(inorder,preorder,pos+1,end);
    
    return newNode;
}

void printInorder(Node* root){
    if(root==NULL){
        return;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}

int main(){

    int preorder[] = {1,2,4,3,5};
    int inorder[] = {4,2,1,5,3};
   Node* root = buildTree(inorder,preorder,0,4);
    // printInorder(root);
    return 0;
}