//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

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
class Solution {
  public:
    int MaxConnection(vector<vector<int>>& grid) {
        // code here
         int n=grid.size();
        DisjointSet ds(n*n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    int dr[]={0,1,0,-1};
                    int dc[]={1,0,-1,0};
                    for(int k=0;k<4;k++){
                        int a=i+dr[k];
                        int b=j+dc[k];
                        if(a>=0 and b>=0 and a<n and b<n and grid[a][b]==1){
                            int u=i*n+j;
                            int v=a*n+b;
                            if(ds.findupar(u)!=ds.findupar(v)){
                                ds.unionbysize(u,v);
                            }
                        }
                    }
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
             for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    int tempans=0;
                    set<int>s;
                    int delrow[]={0,1,0,-1};
                    int delcol[]={1,0,-1,0};
                    for(int k=0;k<4;k++){
                        int x=i+delrow[k];
                        int y=j+delcol[k];
                        if(x>=0 and y>=0 and x<n and y<n  and grid[x][y]==1){
                            int v=x*n+y;
                            s.insert(ds.findupar(v));
                        }
                    }
                    for(auto it:s){
                        tempans+=ds.size[it];
                    }
                    ans=max(ans,tempans+1);
                }else{
                    int tempans=ds.size[ds.findupar(i*n+j)];
                    ans=max(ans,tempans);
                }
            }
        }
        return ans;
    }
    
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> grid(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> grid[i][j];
            }
        }

        Solution obj;
        cout<<obj.MaxConnection(grid)<<"\n";
    }
}

// } Driver Code Ends