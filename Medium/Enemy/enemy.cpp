//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
        int largestArea(int n,int m,int k,vector<vector<int>> &enemy)
        {
            //  code here
            vector<int> rows;
            vector<int> columns;
            rows.push_back(0);
            columns.push_back(0);
            rows.push_back(n+1);
            columns.push_back(m+1);

            for(auto &it: enemy) {
                rows.push_back(it[0]);
                columns.push_back(it[1]);
            }
            
            sort(rows.begin(), rows.end());
            sort(columns.begin(), columns.end());
            
            int maxRow = 0, maxColumn = 0;
            for(int i = 1; i<rows.size(); i++) {
                maxRow = max(maxRow, rows[i]-rows[i-1]-1);
            } 
            for(int i = 1; i<columns.size(); i++) {
                maxColumn = max(maxColumn, columns[i]-columns[i-1]-1);
            } 
            
            return maxRow * maxColumn;
        
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int k;
        cin>>k;
        vector<vector<int>> e(k,vector<int>(2));
        for(int i=0;i<k;i++)
            cin>>e[i][0]>>e[i][1];
        Solution a;
        cout<<a.largestArea(n,m,k,e)<<endl;
    }
    return 0;
}
// } Driver Code Ends