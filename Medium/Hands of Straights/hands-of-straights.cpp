//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isStraightHand(int n, int k, vector<int> &v) {
        if(n%k!=0) return 0;
        map<int,int> m;
        for(auto x: v){
            m[x]++;
        }
        while(!m.empty()){
            int a=m.begin()->first;
            for(int i=0;i<k;i++){
                if(m[a+i]==0) return 0;
                else if(--m[a+i]==0) m.erase(a+i);
            }
        }
        return 1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, groupSize;
        cin >> N >> groupSize;

        vector<int> hand(N);
        for (int i = 0; i < N; i++) cin >> hand[i];

        Solution obj;
        int ans = obj.isStraightHand(N, groupSize, hand);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends