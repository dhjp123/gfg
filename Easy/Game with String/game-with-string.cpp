//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        int n= s.length();
        unordered_map<char,int>p;
        for(int i=0;i<n;i++){
            p[s[i]]++;
            
        }
        priority_queue<int>q;
        
        for(auto m:p){
            q.push(m.second);
        }
        while(k--){
            int temp= q.top();
            q.pop();
            temp=temp-1;
            q.push(temp);
            
        }
        int res=0;
        while(!q.empty()){
            int x= q.top();
            q.pop();
            res+=x*x;
            
        }
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends