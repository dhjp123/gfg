//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:

	int minRemoval(int arr[], int n) {
	    // code here
	    sort(arr,arr+n);
	    int cnt=0;
	    vector<int>ans;
	    int i=0;
	    int j=n-1;
	    if(2*arr[0]>=arr[n-1]){
	        return 0;
	        
	    }
	    int maxLen=0;
	    for (int i = 0; i < n; i++) {
	        
           int ind = upper_bound(arr, arr + n, 2 * arr[i]) - arr;
           maxLen = max(maxLen, ind - i);
        }
        return n - maxLen;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.minRemoval(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends