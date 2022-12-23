//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	bool commonSubseq (string a, string b)
	{
	    // your code here
	    set<char>s;
	    for(int i=0;i<a.length();i++){
	        s.insert(a[i]);
	    }
	    for(int i=0;i<b.length();i++){
	        if(s.find(b[i])!=s.end()){
	            return true;
	        }
	    }
	    return false;
	}
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--) 
	{
		string a, b; cin >> a >> b;
		Solution ob;
		cout << ob.commonSubseq (a, b) << '\n';
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends