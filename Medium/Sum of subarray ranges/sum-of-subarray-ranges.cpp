//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long subarrayRanges(int n, vector<int> &arr) {
        // int maxi=INT_MIN;
        // int mini= INT_MAX;
        int res=0;
        int sum=0;
        for(int i=0;i<n;i++){
            int maxi=arr[i];
            int mini= arr[i];
            for(int j=i+1;j<n;j++){
                maxi=max(maxi,arr[j]);
                mini =min(mini,arr[j]);
                sum=(maxi-mini);
                 res+=sum;
            
            }
           
           
            
        }
        
        return res;
        
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution obj;
        cout << obj.subarrayRanges(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends