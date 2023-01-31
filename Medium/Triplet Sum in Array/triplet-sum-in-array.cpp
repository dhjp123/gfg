//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int nums[], int n, int z)
    {
       
       // vector<vector<int>>ans;
        set<vector<int>>v;
        //int z=0;
       // int n= nums.size();
        //sort(nums.begin(),nums.end());
        sort(nums,nums+n);
        for(int i=0;i<n;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum= nums[i]+nums[j]+nums[k];
                if(sum==z){
                    return 1;
//v.insert({nums[i],nums[j],nums[k]});
                   // j++,k--;
                }
                else if(sum<z){
                    j++;
                }
                else{
                    k--;
                }
            }
            
            
        }
       
       
        return  0;

        
    }
    

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends