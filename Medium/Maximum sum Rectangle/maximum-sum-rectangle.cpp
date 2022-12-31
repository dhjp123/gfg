//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
   
   
    int maximumSumRectangle(int R, int C, vector<vector<int>> M) {
        // code here
        
         int sum[R];

        int maxsum = INT_MIN;

        for(int C_START = 0;C_START<C;C_START++)
        {
           // sum[C]=0;
            memset(sum,0,sizeof(sum));

            for(int C_END = C_START;C_END<C;C_END++){

                for(int row = 0;row<R;row++){

                    sum[row]+=M[row][C_END];

                }

                int currsum = kadanes(sum,R);

                maxsum = max(maxsum,currsum);

            }

        }

        return maxsum;

        // code here

    }

    int kadanes(int a[],int R)

{

    int max_so_far = INT_MIN, max_ending_here = 0;

 

    for (int i = 0; i < R; i++) {

        max_ending_here = max_ending_here + a[i];

        if (max_so_far < max_ending_here)

            max_so_far = max_ending_here;

 

        if (max_ending_here < 0)

            max_ending_here = 0;

    }

    return max_so_far;
        
    }
    
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        Solution ob;
        cout << ob.maximumSumRectangle(N, M, v) << "\n";
    }
}
// } Driver Code Ends