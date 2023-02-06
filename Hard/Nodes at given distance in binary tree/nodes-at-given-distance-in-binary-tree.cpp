//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}


// } Driver Code Ends
/* A binary Tree node
struct Node
{
    int data;
    struct Node *left, *right;
};
*/

class Solution
{
private:
void ms(Node* root, unordered_map<Node*, Node*> &pk, Node* target) {
        queue<Node*> queue;
        queue.push(root);
        while(!queue.empty()) { 
            Node* current = queue.front(); 
            queue.pop();
            if(current->left) {
                pk[current->left] = current;
                queue.push(current->left);
            }
            if(current->right) {
                pk[current->right] = current;
                queue.push(current->right);
            }
        }
    }
public:
    vector<int>KDistanceNodes(Node* root, int Target, int k) {
         queue<Node*> q;

        q.push(root);

        Node* target;

        while(!q.empty())

        {

            Node* node = q.front(); q.pop();

            if(node->data == Target)

            {

                target = node;

                break;

            }

            if(node->left)

            {

                q.push(node->left);

            }

            if(node->right)

            {

                q.push(node->right);

            }

        }
        unordered_map<Node*,Node*>pk;
       // Node*target;
       int dis=0;
        ms(root,pk,target);
        unordered_map<Node*,bool>vis;
        queue<Node*>qt;
        qt.push(target);
        vis[target]=true;
        while(!qt.empty()){
            int n= qt.size();
            
            
            if(dis++==k)break;
            for(int i=0;i<n;i++){
                Node*curr= qt.front();
                qt.pop();
                if(curr->left!=nullptr && !vis[curr->left]){
                    vis[curr->left]=true;
                    qt.push(curr->left);
                    
                    
                    
                }
                if(curr->right!=nullptr && !vis[curr->right]){
                    vis[curr->right]=true;
                    qt.push(curr->right);
                   
                   
                    
                }
                if(pk[curr] &&!vis[pk[curr]]){
                    vis[pk[curr]]=true;
                    qt.push(pk[curr]);
                    
                }
                
            }
            
        }
        
        vector<int>res;
        while(!qt.empty()){
            Node*cur=qt.front();
            qt.pop();
            res.push_back(cur->data);
            
        }
        sort(res.begin(),res.end());
        return res;
        
    }    

};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    getchar();
    
    Solution x = Solution();
    
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* head = buildTree(s);
        
        int target, k;
        cin>> target >> k;
        getchar();
        
        vector <int> res = x.KDistanceNodes(head, target, k);
        
        for( int i=0; i<res.size(); i++ )
            cout<< res[i] << " ";
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends