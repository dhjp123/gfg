//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int n, int s){
        // code here
        if( s==0 && n>1){
            return "-1";
        }
        string res="";
        int i=0;
        while(i<n){
            if(s>=9){
                res+='9';
                s-=9;
                i++;
            }
            else{
                res+=to_string(s);
                s=0;
                i++;
            }
        }
        if(s!=0){
            return "-1";
        }
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends