//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    vector<int> findElements(int a[], int n)
    {
        priority_queue<int,vector<int>,greater<int>>pq;
       int k=2;
       vector<int>ans;
       //priority_queue<int>pq;
        for(int i=0;i<n;i++){
            pq.push(a[i]);
        }
        while(pq.size()>2){
            int x=pq.top();
            ans.push_back(x);
            pq.pop();
        }
        return ans;
        
        
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
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        Solution ob;
        vector <int> res = ob.findElements(a,n);
        
        for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
        cout<<endl;
    }
}
// } Driver Code Ends