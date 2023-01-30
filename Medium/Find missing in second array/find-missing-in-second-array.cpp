//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	vector<long long> findMissing(long long a[], long long b[],  
                 int n, int m) 
	{ 
	    unordered_set<int>st;
	    vector<long long int>ans;
	    for(int i=0;i<m;i++){
	        st.insert(b[i]);
	    }
	    for(int i=0;i<n;i++){
	        if(st.find(a[i])==st.end()){
	            ans.push_back(a[i]);
	            
	        }
	    }
	    return ans;
	    // Your code goes here
	} 
};
	

//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
        cin>>n;
        int m;
        cin>>m;
        long long a[n];
        long long b[m];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<m;i++)
        cin >> b[i];
        vector<long long> ans;
        

        Solution ob;
        ans=ob.findMissing(a,b,n,m);
        for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends