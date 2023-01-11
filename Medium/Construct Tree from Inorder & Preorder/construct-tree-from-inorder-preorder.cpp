//{ Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

// } Driver Code Ends

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    int j=0;
    
     Node*dhruv(int in[], int il, int ir, int pre[], int &k) {
        if(ir < il)
            return NULL;
        int root = pre[k++], i;
        Node* curr = new Node(root);
        if (il == ir) return curr;
        for(i = il; i <= ir; i++)
            if (in[i] == root) break;
        
        curr->left = dhruv(in, il, i-1, pre, k);
        curr->right = dhruv(in, i+1, ir, pre,k);
        return curr;
        
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        int k = 0;
        return dhruv(in,0,n-1,pre,k);
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}

// } Driver Code Ends