//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int n){
        
        // your code here
         int total=0,sum1=0,sum2=0,mxsum=INT_MIN,minsum=INT_MAX;   
        for(int i=0;i<n;i++)
        {
            total+=arr[i];
            sum1+=arr[i];
            
            sum2+=arr[i];
            mxsum=max(mxsum,sum1);
            if(sum1<0) sum1=0;
           minsum=min(sum2,minsum);
            if(sum2>0) sum2=0;
        }
        return (total==minsum)?mxsum:max(mxsum,total-minsum);  
    
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends