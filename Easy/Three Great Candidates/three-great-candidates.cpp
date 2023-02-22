//{ Driver Code Starts
//Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    long long maxProduct(int arr[], int n) {
        
        sort(arr,arr+n);

    long long a1=arr[0],a2=arr[1], b=arr[n-3], c=arr[n-2], d=arr[n-1];

        

        return max(a1*a2*d , b*c*d);


    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends