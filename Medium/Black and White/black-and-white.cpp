//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

long long numOfWays(int n, int m);

int main() {
    // code
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        cout << numOfWays(n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends


//Function to find out the number of ways we can place a black and a 
//white Knight on this chessboard such that they cannot attack each other.
long long numOfWays(int N, int M)
{
    // write code here
      const int mod = 1e9+7;

    vector<pair<int, int>> vp = {

        {2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {-1, 2}, {1, -2}, {-1, -2}

    };

    long long ans = 0;

    for(int i=0; i<N; i++){

        for(int j=0; j<M; j++){

            int count = 0;

            for(auto it: vp){

                int x = i+it.first;

                int y = j+it.second;

                if(x>=0 && y>=0 && x<N && y<M) count++;

            }

            ans += (N*M - count - 1);

            ans %= mod;

        }

    }

    return ans;
}