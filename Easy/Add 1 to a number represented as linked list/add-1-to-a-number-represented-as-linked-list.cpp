//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* reverse(Node* head){

        Node* curr=head;

        Node* prev=NULL;

        Node* temp=NULL;

        while(curr){

            temp=curr->next;

            curr->next=prev;

            prev=curr;

            curr=temp;

        }

        

        return prev;

    }

    

    Node* addOne(Node *head) 

    {

        head=reverse(head);

        

        Node* curr=head;

        

        while(curr){

            if(curr->data<9){

                curr->data+=1;

                break;

            }else if(curr->next){

                curr->data=0;

                curr=curr->next;

            }else{

                curr->data=0;

                curr->next= new Node(1);

                break;

            }

        }

        

        

        head=reverse(head);

        

        return head;
    }
    
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends