;
    Node* newNode = new Node(curr);
     if(start==end){
         return newNode;
    }
    int pos = search(inorder,start,end,curr);
    newNode->left =  buildTree(in