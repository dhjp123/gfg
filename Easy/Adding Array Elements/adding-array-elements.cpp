//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;



// } Driver Code Ends
class Solution{
  public:
    int minOperations(int arr[], int n, int k) {
        // code here
        priority_queue <int, vector<int>,greater<int>> pq (arr,arr+n);
        int count = 0;
        while(pq.top() < k)
        {
            if(pq.size() == 1 && pq.top() < k)
                return -1;
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            pq.push(x+y);
            count++;
        }
        return count;
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
        Solution obj;
        int ans = obj.minOperations(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends