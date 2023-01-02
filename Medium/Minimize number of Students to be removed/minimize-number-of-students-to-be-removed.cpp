//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int removeStudents(int h[], int n) {
        // code here
        vector<int>v;
        for(int i=0;i<n;i++){
            int x= h[i];
            auto k= lower_bound(v.begin(),v.end(),x);
            if(k==v.end()){
                v.push_back(x);
            }
            else{
                *k=x;
            }
            
        }
        return n-v.size();
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int H[N];
        for(int i=0; i<N; i++)
            cin>>H[i];

        Solution ob;
        cout << ob.removeStudents(H,N) << endl;
    }
    return 0;
}
// } Driver Code Ends