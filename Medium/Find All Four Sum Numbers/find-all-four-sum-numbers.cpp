//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        
        // Your code goes here
        set<vector<int>>st;
      vector<vector<int>>res;
      int n=arr.size();
      sort(arr.begin(),arr.end());
      
      for(int i=0;i<n;i++){
          
          for(int j=i+1;j<n;j++){
              
              int ptr1=j+1;
              int ptr2=n-1;

              while(ptr1<ptr2){
                  
                  if(arr[i]+arr[j]+arr[ptr1]+arr[ptr2]==k){
                    vector<int>temp{arr[i],arr[j],arr[ptr1],arr[ptr2]};
                    st.insert(temp);
                    ptr1++;
                    ptr2--;
                  }else if(arr[i]+arr[j]+arr[ptr1]+arr[ptr2]<k){
                      ptr1++;
                  }else{
                      ptr2--;
                  }
   
              }
          }
      }
      
     for(auto it = st.begin();it!=st.end();it++){
         res.push_back(*it);
     }
      
      return res;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends