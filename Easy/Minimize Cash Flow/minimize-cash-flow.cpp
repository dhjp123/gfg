//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
       
       int getmin(vector<int>&amount){

    int mini=0;

    for(int i=1;i<amount.size();i++){

        if(amount[i]<amount[mini]){

            mini=i;

        }

    }

    return mini;

}

int getmax(vector<int>&amount){

    int maxi=0;

    for(int i=1;i<amount.size();i++){

        if(amount[i]>amount[maxi]){

            maxi=i;

        }

    }

    return maxi;

}

void solve(vector <int>&amount,vector<vector<int>>& transaction){

    

    int maxi=getmax(amount);

    int mini=getmin(amount);

    if(amount[maxi]==0 or amount[mini]==0){

        return;

    }

    int min1=min(-amount[mini],amount[maxi]);

    amount[maxi]-=min1;

    amount[mini]+=min1;

    transaction[mini][maxi]=min1;

    solve(amount,transaction);

}

vector<vector<int>> minCashFlow(vector<vector<int>>& transaction, int n)

{

   // Write your code here

    vector<int>amount(n,0);

    for(int p=0;p<n;p++){

        for(int i=0;i<n;i++){

            amount[p]+=(transaction[i][p]-transaction[p][i]);

        }

    }

    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){

            transaction[i][j]=0;

        }

    }

    solve(amount,transaction);

    return transaction;
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
        vector<vector<int>> g(n,vector<int> (n));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cin>>g[i][j];
        }
        Solution s;
        vector<vector<int>> r=s.minCashFlow(g,n);
        for(auto j:r)
        {
            for(auto i:j)
                cout<<i<<" ";
            cout<<endl;
        }
        // cout<<endl;
    }
    return 0;
}
// } Driver Code Ends