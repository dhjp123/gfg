//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxBalls(int N, int M, vector<int> a, vector<int> b){
        // code here
         int R[] = {0, 0};
    int i = 0, j = 0;
    while (i < N && j < M) {
        if (a[i] < b[j]) R[0] += a[i++];
        else if (a[i] > b[j]) R[1] += b[j++];
        else {
            int v = a[i], ca = 0, cb = 0;
            while (i < N && a[i] == v) ca++, i++;
            while (j < M && b[j] == v) cb++, j++;
            int r0 = max(R[0] + ca*v, R[1] + (ca+cb-1)*v);
            int r1 = max(R[1] + cb*v, R[0] + (ca+cb-1)*v);
            if (ca > 1 && cb > 1) {
                r0 = max(r0, R[0] + (ca+cb-2)*v);
                r1 = max(r1, R[1] + (ca+cb-2)*v);
            }
            R[0] = r0; R[1] = r1;
        }
    }
    while (i < N) R[0] += a[i++];
    while (j < M) R[1] += b[j++];
    return max(R[0], R[1]);
}

      
      


    
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M;
        cin>>N>>M;
        vector<int> a(N), b(M);
        for(int i = 0;i < N;i++)
            cin>>a[i];
        for(int i = 0;i < M;i++)
            cin>>b[i];
        
        Solution ob;
        cout<<ob.maxBalls(N, M, a, b)<<"\n";
    }
    return 0;
}
// } Driver Code Ends