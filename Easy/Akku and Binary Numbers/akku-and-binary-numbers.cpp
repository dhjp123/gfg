//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public: 
     // typedef ll long long int;
      void precompute(){

        // Code Here

           

    }

    long long solve(long long l, long long r){

        // Code Here

        long long  ans=0;

        for(long long  i=1;i<=r;i*=2){

            for(long long  j=i*2;j<=r;j*=2){

                for(long long  k=j*2;k<=r;k*=2){

                    long long  t=i|j|k;

                    if(t>=l && t<=r)

                        ans++;

                }

            }

        }

        return ans;

    }
    
    
    
};



//{ Driver Code Starts.

int main()
{
    int t;
    Solution ob;
    ob.precompute();
    cin>>t;
    while(t--)
    {
        long long l,r;
        cin>>l>>r;
        cout << ob.solve(l, r) << endl; 
    }
    return 0;
}
// } Driver Code Ends