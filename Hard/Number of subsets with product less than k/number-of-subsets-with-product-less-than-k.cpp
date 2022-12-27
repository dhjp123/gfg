//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    
    void solve(int p, int k, int i, int arr[], int n, int &count)
{
if(i>=n or p>k)
return;
if(p*arr[i]<=k)
count++;
solve(p*arr[i], k, i+1, arr, n, count);
solve(p, k, i+1, arr, n, count);
}
int numOfSubsets(int arr[], int N, int K) {
// code here
int count=0;
solve(1, K, 0, arr, N, count);
return count;
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>K;

        Solution ob;
        cout << ob.numOfSubsets(arr,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends