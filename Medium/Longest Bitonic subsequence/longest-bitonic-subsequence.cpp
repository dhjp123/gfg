//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int LongestBitonicSequence(vector<int>nums)
	{
	    // code here
	    int n=nums.size();

     vector<int>a(n,0),b(n,0);

     for(int i=1;i<n;i++){

         for(int j=0;j<i;j++){

             if(nums[i]>nums[j])

             a[i]=max(a[j]+1,a[i]);

             if(nums[n-i-1]>nums[n-j-1])

             b[n-i-1]=max(b[n-j-1]+1,b[n-i-1]);

         }  }

     int ans=0;

     for(int i=0;i<n;i++)

         ans=max(ans,a[i]+b[i]+1);

     return ans;


	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.LongestBitonicSequence(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends