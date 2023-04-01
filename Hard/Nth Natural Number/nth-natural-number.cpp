//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


class Solution{
	public:
    	long long findNth(long long N)
    {
         string ans="";

        while(N){

            ans=to_string(N%9)+ans;

            N/=9;

        }

        return stoll(ans);
        // code here.
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n , ans;
		cin>>n;
		Solution obj;
		ans = obj.findNth(n);
		cout<<ans<<endl;
	}
}


// } Driver Code Ends