//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	     unordered_map<int,int> mp;

     int ans=0;

     int sum=0;

     mp.insert({0,-1});

     for(int i=0;i<n;i++){

         sum=sum+arr[i];

         int rem=sum%k;

         if(rem<0){

             rem=rem+k;

         }

         

         if(mp.find(rem)==mp.end())

         mp.insert({rem,i});

         else

         ans=max(ans,(i-mp[rem]));

         

     }

     return ans;
	    // Complete the function
	}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}

// } Driver Code Ends