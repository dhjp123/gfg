//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Returns maximum repeating element in arr[0..n-1].
	// The array elements are in range from 0 to k-1
	int maxRepeating(int *arr, int n, int k) {
	    
	    map<int ,int>mp;
	    for(int i=0;i<n;i++){
	        mp[arr[i]]++;
	        
	    }
	    int cnt=-1;
	    int mini=INT_MAX;
	    for(auto i:mp){
	        if(i.second>cnt){
	            cnt=i.second;
	            mini=i.first;
	        }
	        else if(i.second==cnt){
	            cnt=i.second;
	            mini=min(mini,i.first);
	        }
	    }
	    return mini;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxRepeating(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends