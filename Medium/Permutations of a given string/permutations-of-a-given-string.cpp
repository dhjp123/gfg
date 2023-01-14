//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		
		vector<string>ans;
		void dhruv( string s,int i)
		{
		   int n=s.size();
           if(i>=n){
               //cout<<s<<" ";
               ans.push_back(s);
               return;
            }
            for(int j=i;j<n;j++)
            {
               swap(s[i],s[j]);
               dhruv(s,i+1);
               swap(s[i],s[j]);
  
            }
        
		    
		}
		vector<string>find_permutation(string s)
		{
		    int i=0;
		    dhruv(s,i);
		    sort(ans.begin(),ans.end());
		    ans.erase(unique(ans.begin(), ans.end()), ans.end());
		    return ans;
		    
		   
		   
		   
		}
		
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends