//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
         int n = nums.size();
        if(n % 2){
            return false;
        }
        unordered_map<int, int> mp;
        for(auto &e: nums){
            mp[e % k]++;
        }
        for(auto &e : mp){
            int mod = e.first;
            if(mod == 0 && mp[mod]%2){
                return false;
            }
            else if(mod != 0 && mp[mod] != mp[(k - mod)]){
                return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends