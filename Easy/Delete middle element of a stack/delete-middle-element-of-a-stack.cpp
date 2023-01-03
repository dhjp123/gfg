//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void dhruv(stack<int >&s,int cnt ,int k){
        if(cnt==k/2){
            s.pop();
            return;
        }
        int y= s.top();
        s.pop();
        
        cnt+=1;
        dhruv(s,cnt,k);
        s.push(y);
        
        
    }
    void deleteMid(stack<int>&s, int k)
    {
        // code here.. 
        int cnt=0;
        dhruv(s,cnt,k);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends