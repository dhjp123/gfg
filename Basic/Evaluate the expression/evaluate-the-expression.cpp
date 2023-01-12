//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
   	int evaluate_exp(int n){
   	    // Code here
   	    if(n&1){
   	        return -1;
   	    }
   	    return 1;
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.evaluate_exp(n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends