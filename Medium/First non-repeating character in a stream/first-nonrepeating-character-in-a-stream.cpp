//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    queue<char>q;
	 string ans;
	 unordered_map<char,int>mp;
	for(int i=0;i<A.size();i++){
	  mp[A[i]]++;
	   q.push(A[i]);
	    while(mp[q.front()]>1 && !q.empty()) q.pop();
	  if(!q.empty())
	       ans.push_back(q.front());
	      else ans.push_back('#');
	   }
	  return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends