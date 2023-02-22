//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int areMatricesIdentical(int n, vector<vector<int>> m1,
         
                             vector<vector<int>> m2) {
        int flag=1;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(m1[i][j]!=m2[i][j]){
                    flag=0;
                }
            }
        }
        if(flag==0){
            return false;
        }
        else{
            return true;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> Grid1(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> Grid1[i][j];
        vector<vector<int>> Grid2(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> Grid2[i][j];
        Solution ob;
        cout << ob.areMatricesIdentical(N, Grid1, Grid2) << "\n";
    }
}
// } Driver Code Ends