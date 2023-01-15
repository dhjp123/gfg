//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    public:
    int solve(int &ans,vector<int>v,int index,int k){
        if(v.size()==1){
            ans=v[0];
            return ans;
        }
        index=(index+k-1)%v.size();
        v.erase(v.begin()+index);
        return solve(ans,v,index,k);
        
    }
    int josephus(int n, int k)
    {
       //Your code here
     //  k=k-1;
       vector<int>v;
       int ans=-1;
       int index=0;
       for(int i=1;i<=n;i++){
           v.push_back(i);
       }
       int res=solve(ans,v,index,k);
       return res;
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends