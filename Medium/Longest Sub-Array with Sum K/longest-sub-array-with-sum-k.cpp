//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:

    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        
        unordered_map<int, int> mp ;

        int preSum = 0 ;

        mp[preSum] = -1 ;

        int maxi = 0 ;  

        for(int i = 0 ; i < N ; i++){

            preSum += A[i] ;

            if(mp.find(preSum - K) != mp.end())

                maxi = max(maxi, i - mp[preSum - K]) ;

            if(mp.find(preSum) == mp.end())

                mp[preSum] = i  ;

        }

            return maxi ;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends