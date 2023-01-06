//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    
  vector<vector<int>>ans;
  void dhruv(int i,int sum,int k,vector<int>&tp){
      if(sum==0 && k==0){
          ans.push_back(tp);
          return;
      }
      if(k==0 || sum<i)
      return;
      if(i==10)
      return;
      if(sum-i>=0){
          tp.push_back(i);
          dhruv(i+1,sum-i,k-1,tp);
          tp.pop_back();
      }
      dhruv(i+1,sum,k,tp);
  }
    vector<vector<int>> combinationSum(int K, int N) {
        // code here
        vector<int>tp;
        dhruv(1,N,K,tp);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K >> N;

        Solution obj;
        vector<vector<int>> ans = obj.combinationSum(K, N);
        sort(ans.begin(), ans.end());
        for (auto &arr : ans) {
            for (auto it : arr) cout << it << ' ';
            cout << endl;
        }
    }
    return 0;
}
// } Driver Code Ends