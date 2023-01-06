//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
  public:
    vector<int> kTop(int a[], int n, int k) 
    { 
        //code here.
        vector<int> res;
        unordered_map<int,int> mp;
        vector<pair<int,int>> t;
        for(int i = 0;i<n;i++){
            t.clear();
            mp[a[i]]++;
            for(auto a : mp) t.push_back({a.first, a.second});
            sort(t.begin(),t.end(),[](const pair<int,int> &a, const pair<int,int> &b)->bool
            {
                if(a.second > b.second) return true;
                   if(a.second == b.second)
                     return (a.first < b.first);
                   return false;
            });
            for(int i = 0;i<t.size() && i<k;i++) res.push_back(t[i].first);
        }
        return res;
    
    }
};


//{ Driver Code Starts.

int main() {
	long long t;
	
	cin >> t;
	
	while(t--){
	    long long n;
	    long long k;
	    cin >> n;
	    cin >> k;
	    int a[n];
	    for(long long i = 0;i<n;i++){
	        cin >> a[i];
	    }
	        Solution ob;
	        vector<int> ans;
	        ans=ob.kTop(a,n,k);
	        for(int i=0;i<ans.size();i++)
	        {
	        cout<<ans[i];
	        cout<<" ";
	        }
	        cout<<'\n';
	    }
	return 0;
}

// } Driver Code Ends