//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int isStackPermutation(int n,vector<int> &a,vector<int> &b){
        stack<int>s;
        //int n= a.size();
        int j=0;
        for(int i=0;i<n;i++){
            s.push(a[i]);
            while(!s.empty() && (b[j]==s.top())){
                s.pop();
                j++;
            }
            
            
        }
    
       
       
        return s.empty();
        
    }
        
    
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        Solution ob;
        cout<<ob.isStackPermutation(n,a,b)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends