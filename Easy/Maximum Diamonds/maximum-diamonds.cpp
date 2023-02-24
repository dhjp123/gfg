//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int maxDiamonds(int a[], int n, int k) {
        priority_queue<int>pq;
        for(int i=0;i<n;i++){
            pq.push(a[i]);
        }
        int ans=0;
        while(k>0){
            int mx= pq.top();
            ans+=mx;
            pq.pop();
            pq.push(mx/2);
            k--;
        }
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.maxDiamonds(A,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends