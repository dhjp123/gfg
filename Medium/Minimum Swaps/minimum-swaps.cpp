//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int minimumSwaps(int c[],int v[],int n,int k,int b,int t)
    {
            // code here
            int res=0;
            int cnt=0;
            for(int i=n-1;i>=0&&k>0;i--){
                int dist=v[i]*t;
                if(dist>=b-c[i]){
                    k--;
                    res+=cnt;
                }
                else{
                    cnt++;
                }
            }
            if(k>0){
                return -1;
            }
            return res;
    }
};

//{ Driver Code Starts.
int main(){
    int t=1,testcases=1;
    cin>>t;
    while(t>=testcases)
    {
        int n,k,b,T;
        cin>>n>>k>>b>>T;
        int c[n];
        int v[n];
        for(auto &j:c)
            cin>>j;
        for(auto &j:v)
            cin>>j;
        Solution s;
        int ans=s.minimumSwaps(c,v,n,k,b,T);
        cout<<ans<<endl;
        testcases++;
    }
    // TIME;
    return 0;
}
// } Driver Code Ends