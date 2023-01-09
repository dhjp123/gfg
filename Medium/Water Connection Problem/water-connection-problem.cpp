//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    
    void dfs(int s,vector<pair<int,int>> res[],int &end,int &wt,bool visited[],int n){
        visited[s] = true;
        for(auto it:res[s]){
            if(!visited[it.first]){
                wt= min(wt,it.second);
                end = it.first;
                dfs(it.first,res,end,wt,visited,n);
            }
        }
    }
    
    
    vector<vector<int>> solve(int n,int p,vector<int> a,vector<int> b,vector<int> d)
    {
        // code here
        vector<vector<int>> ans;
        vector<int> in(n+1,0);
        vector<int> out(n+1,0);
        bool visited[n+1] = {false};
        vector<pair<int,int>> res[n+1];
        for(int i=0;i<p;i++){
            out[a[i]] =1;
            in[b[i]]=1;
            res[a[i]].push_back({b[i],d[i]});
                }
        for(int i=1;i<=n;i++){
            if(out[i] == 1 && in[i] == 0 && !visited[i]){
                int end;
                int wt = INT_MAX;
                dfs(i,res,end,wt,visited,n);
                ans.push_back({i,end,wt});
            }
        }
    return ans;
    }
    
};


//{ Driver Code Starts.
int main()
{
	int t,n,p;
	cin>>t;
	while(t--)
    {
        cin>>n>>p;
        vector<int> a(p),b(p),d(p);
        for(int i=0;i<p;i++){
            cin>>a[i]>>b[i]>>d[i];
        }
        Solution obj;
        vector<vector<int>> answer = obj.solve(n,p,a,b,d);
        cout<<answer.size()<<endl;
        for(auto i:answer)
        {
            cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<endl;
        }
        
    }
	return 0;
}
// } Driver Code Ends