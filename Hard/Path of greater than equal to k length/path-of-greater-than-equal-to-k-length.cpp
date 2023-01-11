//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution {
public:
   unordered_map<int,list<pair<int,int>>>adj;
   bool dhruv(int so,vector<bool>&visited ,int k ){
       visited[so]=true;
       if(k<=0){
           return true;
           
       }
       for(auto x:adj[so]){
           int t=x.first;
           int y= x.second;
           if(visited[t]==true){
               continue;
           }
           if(y>=k){
               return true;
           }
           if(dhruv(t,visited,k-y)){
               return true;
           }
       }
       visited[so]=false;
       return false;
       
       
   }
    bool pathMoreThanK(int V, int E, int k, int *a) 
    { 
       //  Code Here
       for(int i=0;i<3*E;i+=3){
          int u=a[i];
          int v=a[i+1];
          int w=a[i+2];
          
          adj[u].push_back({v,w});
          adj[v].push_back({u,w});
      }
      vector<bool>visited(V,false);
      return dhruv(0,visited,k);
    } 
};




//{ Driver Code Starts.


int main() {
	//code
    int t;cin >> t;
    while(t--)
    {
        int V, E, K;
        cin >> V >> E >> K;
        int a[3*E + 1];
        for(int  i=0;i<3*E;i++){
            cin >> a[i];
        }
        
        Solution obj;
        if(obj.pathMoreThanK(V, E, K, a)){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
        
    }
	return 0;
}
// } Driver Code Ends