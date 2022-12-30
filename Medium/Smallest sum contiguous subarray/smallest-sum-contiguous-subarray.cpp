//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
  typedef long long int lli;
  int smallestSumSubarray(vector<int>& arr){
      //Code here
       lli sum=0;
       lli  n= arr.size();
        lli maxi=INT_MAX;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            maxi=min(sum,maxi);
            if(sum>0){
                sum=0;
            }
            
        }
        return maxi;
        
    
  }
};


//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        Solution ob;
        
        int ans = ob.smallestSumSubarray(a);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends