//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string s){
        vector<int>v(256,-1);
        int n= s.size();
        int st=-1;
        int maxi=0;
        for(int i=0;i<n;i++){
            if(v[s[i]]>st){
                st=v[s[i]];
            }
            v[s[i]]=i;
            maxi=max(maxi,i-st);
        }
        return maxi;
        //code
        
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends