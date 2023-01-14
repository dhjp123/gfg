//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    vector<string>ans;
    void solve(string s,int j){
        if(j>=s.length()){
            ans.push_back(s);
            return ;
        }
        for(int k=j;k<s.length();k++){
            swap(s[j],s[k]);
            solve(s,j+1);
            swap(s[j],s[k]);
        }
        
    }
    
    vector<string> permutation(string s)
    {
        //Your code here
        int j=0;
        solve(s,j);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends