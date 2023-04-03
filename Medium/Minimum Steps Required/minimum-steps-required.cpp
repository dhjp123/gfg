//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int minSteps(string s) {
   int cnt=1;
   int n= s.size();
   for(int i=1;i<n;i++){
       if(s[i]!=s[i-1]){
           cnt++;
       }
   }
   return cnt/2+1;
   
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends