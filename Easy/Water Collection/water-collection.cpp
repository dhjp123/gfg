//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int maxWater(int height[], int n) {
            // code here 
             //int n = height.size();
        
    vector<int>left(n);
        vector<int>right(n);
        
        left[0] = height[0];
        for(int i=1;i<n;i++){
            
            left[i]=max(left[i-1],height[i]);
        
        }
        
        right[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            
            right[i] = max(right[i+1],height[i]);
        }
        
        int ans =0;
        
        for(int i=0;i<n;i++){
            
            
            ans+=min(left[i],right[i])-height[i];
            
        }
        
        return ans;
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
        auto ans = ob.maxWater(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends