#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data =val;
        left =NULL;
        right =NULL;
    }
};
int search(int inorder[], int start, int end, int curr){
    for(int i=start;i<=end;i++){
        if(curr == inorder[i]){
            return i;
        }
    }
    return -1;
}
Node* buildTree(int preorder[],int inorder[],int start,int end){

    static int idx=0;
    if(start>end){
        return NULL;
    }
    int curr = preorder[idx];
    idx--;
    Node* newNode = new Node(curr);
    if(start == end){
        return newNode;
    }
    int pos = search(inorder,start,end,curr);
    newNode->right = buildTree(preorder,inorder,pos+1,end);
    newNode->left = buildTree(preorder,inorder,start,pos-1);
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
    int postorder[] = {4,2,5,3,1};
      int inorder[] = {4,2,1,5,3};
      Node* root = buildTree(postorder,inorder,0,4);
      printInorder(root);
      return 0;
}