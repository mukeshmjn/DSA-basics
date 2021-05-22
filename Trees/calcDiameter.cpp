#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }

};
int calcDiam(Node* root, int* height){
    if(root == 0){
        *height = 0;
        return 0;
    }
    int lh = 0,rh =0;
    int lDiam = calcDiam(root->left,&lh);
    int rDiam = calcDiam(root->right,&rh);
    int currDiam = lh+rh+1;
    *height = max(lh,rh)+1;
    return max(currDiam,max(lDiam,rDiam));
}
int main(){
    return 0;
}