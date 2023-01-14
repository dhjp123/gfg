//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    vector<string>ans;
    void solve(string s,string s1){
        if(s.length()==0){
            ans.push_back(s1);
            return;
            
        }
        string op1=s1;
        string op2=s1;
        op1.push_back(' ');
        op1.push_back(s[0]);
        op2.push_back(s[0]);
        s.erase(s.begin()+0);
        solve(s,op1);
        solve(s,op2);
        return;
        
    }

    vector<string> permutation(string s){
        // Code Here
        string s1="";
        s1.push_back(s[0]);
        s.erase(s.begin()+0);
        solve(s,s1);
        return ans;
    }
};

//{ Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}

// } Driver Code Ends