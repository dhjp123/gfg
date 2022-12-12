//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
  public:
    void inorder(vector<int>&A,vector<int>&ans,int i,int n)
    {
        if(i>=n){
            return;
        }
        inorder(A,ans,2*i+1,n);
        ans.push_back(A[i]);
        inorder(A,ans,2*i+2,n);
        
    }
    int minSwaps(vector<int>&A, int n){
        //Write your code here
       // int n=ans.size();
       int i=0;
        vector<int>ans;
        inorder(A,ans,0,n);
        // min.swap
        vector<pair<int,int>> v(n);
       for(int i=0;i<n;i++)
       v[i]={ans[i],i};
       
       sort(v.begin(),v.end());
       
       int k = 0;
       for(int i=0;i<n;i++)
       {
           if(v[i].second==i)
               continue;
           else
           {
               k++;
               swap(v[i],v[v[i].second]);
               i--;
           }
       }
       return k;
    }
    
    
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<int>A(n);
	    for(int i = 0 ; i < n; i++){
	        cin >> A[i];
	    }
	    Solution ob;
	    int ans = ob.minSwaps(A, n);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends