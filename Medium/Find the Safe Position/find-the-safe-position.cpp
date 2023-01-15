//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
     int solve(int &ans,vector<int>v,int index,int k){
        if(v.size()==1){
            ans=v[0];
            return ans;
        }
        index=(index+k)%v.size();
        v.erase(v.begin()+index);
        return solve(ans,v,index,k);
        
    }
  
  
    int safePos(int n, int k) 
    {
        k=k-1;
       vector<int>v;
       int ans=-1;
       int index=0;
       for(int i=1;i<=n;i++){
           v.push_back(i);
       }
       int res=solve(ans,v,index,k);
       return res;
        // code here
        
        
    }
        
        
       
    
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        
        cin>>n>>k;

        Solution ob;
        cout << ob.safePos(n,k) << endl;
    }
    return 0;
}
// } Driver Code Ends