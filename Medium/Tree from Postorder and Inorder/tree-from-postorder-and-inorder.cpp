//{ Driver Code Starts
/* program to construct tree using inorder and postorder traversals */
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

/* This funtcion is here just to test buildTreeUtil() */
void preOrder(Node* node) {
    if (node == NULL) return;

    /* then print the data of node */
    printf("%d ", node->data);

    /* first recur on left child */
    preOrder(node->left);

    /* now recur on right child */
    preOrder(node->right);
}

Node* buildTree(int in[], int post[], int n);

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int in[n], post[n];
        for (int i = 0; i < n; i++) cin >> in[i];
        for (int i = 0; i < n; i++) cin >> post[i];
        Node* root = buildTree(in, post, n);
        preOrder(root);
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

//Function to return a tree created from postorder and inoreder traversals.
int findpos(int in[],int n,int x){
    for(int i=0;i<n;i++){
        if(in[i]==x){
            return i;
        }
    }
    return -1;
}
Node*solve(int in[],int post[],int &ind,int i,int j,int n){
    if(ind<0 ||i>j){
        return nullptr;
    }
    int x=post[ind--];
    Node*root=new Node(x);
    int pos=findpos(in,n,x);
    root->right= solve(in,post,ind,pos+1,j,n);
    root->left=solve(in,post,ind,i,pos-1,n);
    return root;
    
}
Node *buildTree(int in[], int post[], int n) {
    int index=n-1;
    Node*ans=solve(in,post,index,0,n-1,n);
    return ans;
    // Your code here
}
