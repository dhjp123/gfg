//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
  public:
    int findDiff(int arr[], int n) {
        int maxi=INT_MAX;
        int mini=INT_MIN;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(auto i:mp){
            maxi=min(maxi,i.second);
            mini=max(mini,i.second);
            
            
        }
        return mini-maxi;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n], i;
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.findDiff(arr, n) << "\n";
    }
    return 0;
}

// } Driver Code Ends