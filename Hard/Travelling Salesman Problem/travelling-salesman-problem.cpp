//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:

int n, mk, select_all, dp[2000][20];
int dfs(int src, vector <vector<int>> &cost, int mk){
    if(mk == select_all)
        return cost[src][0];
    if(dp[mk][src] != -1)
        return dp[mk][src];
    int ans = INT_MAX;
    for(int city = 0; city<n; city++){
        if((mk&(1<<city)) == 0){
            int newAns = cost[src][city]+dfs(city, cost, mk|(1<<city));
            ans = min(ans, newAns);
        }
    }
    return dp[mk][src] = ans;
}
int total_cost(vector<vector<int>>cost){
    memset(dp, -1, sizeof(dp));
    n = cost.size();
    select_all = (1<<n)-1;
    mk = 1;
    return dfs(0, cost, mk);}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>cost(n, vector<int>(n, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)cin >> cost[i][j];
		Solution obj;
		int ans = obj.total_cost(cost);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends