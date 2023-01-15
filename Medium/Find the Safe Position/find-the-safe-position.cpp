//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
  
    int safePos(int n, int k) {
        // code here
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            v[i]=i;
        }
        int index=0;

        while(v.size()>1)

        {

            index=index+k-1;

            index=index%v.size();

            v.erase(v.begin()+index);

        }

        return v[0]+1;

    }
        
        
       
    
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        
        cin>>n>>k;

        Solution ob;
        cout << ob.safePos(n,k) << endl;
    }
    return 0;
}
// } Driver Code Ends