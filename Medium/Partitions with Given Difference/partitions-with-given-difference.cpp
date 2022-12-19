//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countPartitions(int n, int d, vector<int>& a) {
        // Code here
        int sum=0;

        int zero=1;

        for(int i=0;i<n;i++)

        {sum+=a[i];if(a[i]==0)zero++;}

        if(sum%2==0^d%2==0)return 0;

        if(d>sum)return 0;

        int t=(sum-d)/2;

        int b[t+1];

        memset(b,0,sizeof(b));

        b[0]=pow(2,zero-1);

        for(int i=0;i<n;i++)

        {

            if(a[i]==0)continue;

            for(int j=t;j>=a[i];j--)

            {

                b[j]+=b[j-a[i]];

                b[j]=b[j]%1000000007;

            }

        }

        return b[t];


    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countPartitions(n, d, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends