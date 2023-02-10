//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int x=n;
        int sum=0;
        while(n>0){
            int r=n%10;
            sum+=(r*r*r);
            n/=10;
            
        }
        if(x==sum){
           // cout<<"Yes"<<endl;
           return "Yes";
        }
        else{
            //cout<<"No"<<endl;
            return "No";
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends