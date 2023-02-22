//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:

	int maxProduct(int arr[], int n) {
	    
	    priority_queue<int>pq;
	    for(int i=0;i<n;i++){
	        pq.push(arr[i]);
	    }
	    long long int x=pq.top();
	    pq.pop();
	    long long int y= pq.top();
	    pq.pop();
	    return x*y;
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
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends