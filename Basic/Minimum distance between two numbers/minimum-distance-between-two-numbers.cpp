//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        int diff=INT_MAX,j=-1,k=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        j=i;
        if(a[i]==y)
        k=i;
        if(j!=-1&&k!=-1)
        {
            if(abs(k-j)<diff)
            diff=abs(k-j);
        }
    }
    return diff==INT_MAX?-1:diff;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends