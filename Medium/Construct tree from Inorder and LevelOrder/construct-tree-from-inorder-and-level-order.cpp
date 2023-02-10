//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
struct Node
{
	int key;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    key = x;
	    left = NULL;
	    right = NULL;
	}
};

Node* buildTree(int inorder[], int levelOrder[], int iStart, int iEnd,int n);
void printPreorder(Node* node)
{
    if (node == NULL)
       return;
    cout << node->key << " ";
    printPreorder(node->left);
    printPreorder(node->right);
    
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int in[n],level[n];
    for(int i=0;i<n;i++){
        cin>>in[i];
    }
    for(int i=0;i<n;i++){
        cin>>level[i];
    }
    Node *root=NULL;
    root = buildTree(in, level, 0, n - 1,n);
    printPreorder(root);
    cout<<endl;
    }
    return 0;
}
// } Driver Code Ends


/*Complete the function below
Node is as follows:
struct Node
{
    int key;
    struct Node* left, *right;
};
*/

Node* solve(int arr[],int s,int e)
{
    if(s>e)
    {
        return NULL;
    }
    int mid=(s+e)/2;
    Node* root=new Node(arr[mid]);
    root->left=solve(arr,s,mid-1);
    root->right=solve(arr,mid+1,e);
    return root;
}
Node* buildTree(int inorder[], int levelOrder[], int iStart, int iEnd,int n)

{
    Node* root=solve(inorder,0,n-1);
    return root;
}