//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int dhruv(int n){
      return n&&(!(n&(n-1)));
  }
    int findPosition(int n) {
        // code here
        if(!dhruv(n)){
            return -1;
        }
        int cnt=0;
        while(n){
            n= n>>1;
            cnt++;
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends