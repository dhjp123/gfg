//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        // Code here
           vector<bool>arr(leaves+1,0);
        for(int i=0;i<N;i++){
            if(arr[frogs[i]]==0){
                for(int j=frogs[i];j<arr.size();j+=frogs[i]){
                    arr[j]=1;
                }
            }
        }
        int count=0;
        for(int i=1;i<arr.size();i++)
            if(arr[i]==0)
                count++;
        return count; 
    }
};


//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, leaves;
        cin >> N >> leaves;
        int frogs[N];
        for (int i = 0; i < N; i++) {
            cin >> frogs[i];
        }

        Solution ob;
        cout << ob.unvisitedLeaves(N, leaves, frogs) << endl;
    }
}
// } Driver Code Ends