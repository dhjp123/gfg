//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool isPossible(int v, vector<pair<int, int> >&arr) {
	    // Code here
	    vector<int>adj[v];
	     for(auto it :arr)
	    {
	        adj[it.first].push_back(it.second);
	    }
	    
	    int indgree[v]={0};
	    for(int i=0;i<v;i++){
	        for(auto it:adj[i]){
	            indgree[it]++;
	        }
	    }
	    queue<int>q;
	    for(int i=0;i<v;i++){
	        if(indgree[i]==0){
	            q.push(i);
	        }
	    }
	    vector<int>ans;
	    while(!q.empty()){
	        int x= q.front();
	        q.pop();
	        ans.push_back(x);
	        for(auto it:adj[x]){
	            indgree[it]--;
	            if(indgree[it]==0){
	                q.push(it);
	            }
	        }
	    }
	    if(ans.size()==v){
	        return true;
	    }
	    return false;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}
// } Driver Code Ends