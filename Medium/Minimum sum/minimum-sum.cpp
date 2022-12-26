//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string solve(int arr[], int n) {
        // code here
        int c=0;
        sort(arr,arr+n);
        string res;
for(int i = n-1; i >= 0; i-=2){
    int r;
    if(i == 0) r = arr[i] + c;
    else r = arr[i] + arr[i-1] + c;
    res += r%10 + '0';
    if(r >= 10) c = r/10;
    else c = 0;
}
if(c) res += c + '0';
while(res.back() == '0') res.pop_back();
reverse(res.begin(), res.end());
return res;
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
        auto ans = ob.solve(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends