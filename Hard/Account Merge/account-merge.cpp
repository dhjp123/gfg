//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class DisjointSet{
public:
    vector<int>parent,size;
    DisjointSet(int n){
        parent.resize(n+1);
        size.resize(n+1,1);
        for(int i=0;i<=n;i++)parent[i]=i;
    }
    int findupar(int node){
        if(parent[node]==node)return node;
        return parent[node]=findupar(parent[node]);
    }
    void unionbysize(int u,int v){
        int uu=findupar(u),uv=findupar(v);
        if(uu==uv)return;
        if(size[uu]>size[uv]){
            parent[uv]=uu;
            size[uu]+=size[uv];
        }else{
            parent[uu]=uv;
            size[uv]+=size[uu];
        }
    }
};
class Solution{
  public:
    vector<vector<string>> accountsMerge(vector<vector<string>> &accounts) {
        // code here
        int n= accounts.size();
        DisjointSet ds(n);
        vector<string>mm[n];
        unordered_map<string ,int>mp;
         for(int i=0;i<n;i++){
            int g=accounts[i].size();
            for(int j=1;j<g;j++){
                if(mp.find(accounts[i][j])==mp.end()){
                    mp[accounts[i][j]]=i;
                }else{
                    ds.unionbysize(i,mp[accounts[i][j]]);
                }
            }
        }
        vector<string>mail[n];
        vector<vector<string>>ans;
        for(auto it:mp){
            mail[ds.findupar(it.second)].push_back(it.first);
        }
        for(int i=0;i<n;i++){
            if(mail[i].size()!=0){
                sort(mail[i].begin(),mail[i].end());
                
        mail[i].insert(mail[i].begin(),accounts[i][0]);
            }
        }
        for(int i=0;i<n;i++){
            if(mail[i].size()!=0){
                ans.push_back(mail[i]);
            }
        }
        return ans;
    }        
        
    
};


//{ Driver Code Starts.
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<vector<string>> accounts;

    for (int i = 0; i < n; i++)
    {
      vector<string> temp;
      int x;
      cin >> x;

      for (int j = 0; j < x; j++)
      {
        string s1;
        cin >> s1;
        temp.push_back(s1);
      }
      accounts.push_back(temp);
    }

    Solution obj;
    vector<vector<string>> res = obj.accountsMerge(accounts);
    sort(res.begin(), res.end());
    cout << "[";
    for (int i = 0; i < res.size(); ++i)
    {
      cout << "[";
      for (int j = 0; j < res[i].size(); j++)
      {
        if (j != res[i].size() - 1)
          cout << res[i][j] << ","
               << " ";
        else
          cout << res[i][j];
      }
      if (i != res.size() - 1)
        cout << "], " << endl;
      else
        cout << "]";
    }
    cout << "]"
         << endl;
  }
}
// } Driver Code Ends