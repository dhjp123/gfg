//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    vector<int>nsl(long long  arr[],int n){
        vector<int >ans;
        stack<pair<long long ,int>>s;
        int p=-1;
        for(int i=0;i<n;i++){
            if(s.size()==0){
                ans.push_back(-1);
            }
            else if(s.size()>0 && s.top().first<arr[i]){
                ans.push_back(s.top().second);
            }
            else if(s.size()>0 && s.top().first>=arr[i]){
                while(s.size()>0 && s.top().first>=arr[i]){
                    s.pop();
                }
                 if(s.size()==0)
                 {
                   ans.push_back(-1);
                 }else{
                     ans.push_back(s.top().second);
                 }
            }
            s.push({arr[i],i});
                
                    
                
        }
        return ans;
        
    }
    vector<int>nsr(long long  arr[],int n){
        vector<int >right;
        stack<pair<long long ,int>>s;
        int p=-1;
        for(int i=n-1;i>=0;i--){
            if(s.size()==0){
                right.push_back(n);
            }
            else if(s.size()>0 && s.top().first<arr[i]){
                right.push_back(s.top().second);
            }
            else if(s.size()>0 && s.top().first>=arr[i]){
                while(s.size()>0 && s.top().first>=arr[i]){
                    s.pop();
                }
                 if(s.size()==0)
                 {
                   right.push_back(n);
                 }else{
                     right.push_back(s.top().second);
                 }
            }
            s.push({arr[i],i});
                
                    
                
        }
        reverse(right.begin(),right.end());
        
        return right;
        
    }
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        
        
	    vector<int> nl = nsl(arr, n);
	    vector<int> nr = nsr(arr, n);
	   // for(int i=0;i<nr.size();i++)
	   // {
	        
	   //  	if(nr[i]==-1)
		  //  {
		  //  	nr[i]=(nr.size());
	   // 	}
	   // }
	    long long a1, maxi= INT_MIN;
	    for(int i=0;i<n;i++){
	        a1= ((nr[i]-nl[i]-1)*arr[i]);
	        maxi= max(maxi,a1);
	        
	    }
	    return maxi;
    
    
    
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends