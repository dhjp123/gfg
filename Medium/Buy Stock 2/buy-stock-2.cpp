//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long maximumProfit(vector<long long>&prices, int n) {
        // Code here
        int profit = 0;
        int min = prices[0];
        
        for(int i=1;i<n;i++)
        {
            if(prices[i]<prices[i-1])
            {
                min = prices[i];
                continue;
            }
            profit += prices[i] - min;
            min = prices[i];
        }
        
        return profit;
    
    
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long long> prices;
        
        for(int i=0; i<n; ++i){
            long long x; cin>>x;
            prices.push_back(x);
        }
        
        Solution obj;
        cout<<obj.maximumProfit(prices, n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends