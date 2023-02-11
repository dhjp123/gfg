//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution{
public:
   
   vector<long long> dhruv(vector<long long> a,int n)
    {
        long long int mod = 1e9+7;
        long long int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            maxi = max(maxi,a[i]);
        }
        long long arr[maxi+1] = {-1};
        arr[0]=1;
        arr[1]=1;
        
        for(int i=2;i<maxi+1;i++){
            arr[i] = (i*arr[i-1])%mod;
        }
        vector<long long>vi;
        for(int i=0;i<n;i++){
            vi.push_back(arr[a[i]]);
        }
        return vi;
    }
   vector<long long> factorial(vector<long long> a, int n) {
       
       return dhruv(a,n);
       
   }

 
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<long long> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<long long> res = ob.factorial(a, n);
        for (i = 0; i < n; i++) {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends