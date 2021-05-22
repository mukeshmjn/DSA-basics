#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* lNode;
    struct Node* rNode;
    Node(int val){
        data = val;
        lNode = NULL;
        rNode = NULL;
    }
};
    int calcHeight(Node* root){
        if(root==NULL){
            return 0;
        }
        int lheight = calcHeight(root->lNode);
        int rheight = calcHeight(root->rNode);
        return max(lheight,rheight)+1;
    }
int main(){
  struct Node* root = new Node(1);
    root->lNode = new Node(2);
    root->rNode = new Node(3);
    root->lNode->lNode = new Node(4);
    root->lNode->rNode = new Node(5);
      root->rNode->lNode = new Node(6);
    root->rNode->rNode = new Node(7);
    cout<<calcHeight(root);
    return 0;
}