//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int canReach(int a[], int n) {
        int maxreachable=0;
        for(int i=0;i<n;i++){
            if(i>maxreachable){
                return 0;
            }else
            {
                maxreachable=max(maxreachable,i+a[i]);
                
            }
            
            
        }
        return 1;
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.canReach(A,N) << endl;
    }
    return 0;
}
// } Driver Code Ends