//{ Driver Code Starts
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
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

void printInorder (struct Node* node)
{
	if (node == NULL)return;
	printInorder(node->left);
	printf("%d ", node->data);
	printInorder (node->right);
}

Node* constructTree(int n, int pre[], char preLN[]);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Node* root = NULL;
        int n;
        cin>>n;
        int pre[n];
        char preLN[n];
        for(int i=0; i<n; i++)cin>>pre[i];
        for(int i=0; i<n; i++)cin>>preLN[i];
        root = constructTree (n, pre, preLN);
        printInorder(root);
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends


/*Structure of the Node of the binary tree is as
struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};
*/
// function should return the root of the new binary tree formed
struct Node *constructTree(int n, int pre[], char preLN[])
{
     stack<Node*> s;
   Node*root=new Node(pre[0]);
   s.push(root);
   int cnt=1;
   while(!s.empty()&&cnt<n)
   {
       Node*curr=s.top();
       Node* t=new Node(pre[cnt]);
       if(curr->left==NULL)
       {
           curr->left=t;
       }
       else
       {
           curr->right=t;
           s.pop();
       }
       if(preLN[cnt]=='N')
       {
           s.push(t);
       }
       cnt++;
   }
   return root;
    // Code here
}