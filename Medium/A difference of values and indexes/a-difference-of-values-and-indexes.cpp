//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 



// } Driver Code Ends
class Solution{
  public:
    int maxDistance(int arr[], int n) 
    { 
        // Complete the function
        int m1=INT_MAX;
        int m2=INT_MIN;
        int m3=INT_MIN;
        int m4=INT_MAX;
        for(int i=0;i<n;i++){
            m2=max(m2,arr[i]+i);
            m1=min(m1,arr[i]+i);
            m3=max(m3,-arr[i]+i);
            m4=min(m4,-arr[i]+i);
        }
        return max((m2-m1),(m3-m4));
    } 
};

//{ Driver Code Starts.
int main() 
{ 
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i<n; i++)
	        cin>>arr[i];
	    Solution obj;
	    cout<<obj.maxDistance(arr, n)<<endl;
	}
} 

// } Driver Code Ends