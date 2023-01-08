//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int selectKcities(int n, int k, vector<vector<int>>& mat){
        //code here
         int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int dp=i;
            vector<int> dist(n,ans);
            for(int j=0;j<k;j++)
            {
                for(int r=0;r<n;r++)
                {
                    dist[r]=min(dist[r],mat[dp][r]);
                }
                dp=max_element(dist.begin(),dist.end())-dist.begin();
                ans=min(ans,dist[dp]);
            
            }
    
        }
        return ans;
    }
};



//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> mat(n, vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>mat[i][j];
            }
        }
        
        Solution obj;
        int ans = obj.selectKcities(n, k, mat);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends