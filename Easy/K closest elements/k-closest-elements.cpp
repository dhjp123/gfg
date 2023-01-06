//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        // code here
       
        priority_queue<pair<int,int>>q;
       vector<int>v;
       for(int i=0;i<n;i++)
       {
           int diff=abs(x-arr[i]);
           if(diff!=0)
           q.push({diff,-1*arr[i]});
           if(q.size()>k)
           q.pop();
           
           
       }
       while(!q.empty())
       {
           v.push_back(-1*q.top().second);
           q.pop();
       }
       reverse(v.begin(),v.end());
       return v;
   
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k >> x;
        Solution ob;
        auto ans = ob.printKClosest(arr, n, k, x);
        for (auto e : ans) {
            cout << e << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends