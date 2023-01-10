//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    
     vector<vector<int>> res;
   void fun(vector<vector<int>> &grid,int n,int m,int i,int j,vector<int> &tmp)
   {
       if(i==n-1 and j==m-1)
       {
           tmp.push_back(grid[i][j]);
           res.push_back(tmp);
           tmp.pop_back();
           return;
       }
       if(i>=n || j>=m)
       {
           return;
       }
       tmp.push_back(grid[i][j]);
       fun(grid,n,m,i+1,j,tmp);
       fun(grid,n,m,i,j+1,tmp);
       tmp.pop_back();
       
   }
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
    {
        // code here
        
        vector<int> tmp;
       fun(grid,n,m,0,0,tmp);
       return res;
   }
       
       
        //return ans;
        
    
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution ob;
        auto ans = ob.findAllPossiblePaths(n, m, grid);
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}

// } Driver Code Ends