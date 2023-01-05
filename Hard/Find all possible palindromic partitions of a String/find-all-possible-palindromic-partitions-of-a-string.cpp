//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  vector<vector<string>>res;
    bool isplanidrome(string t){
        int i=0;
        int n= t.size()-1;
        while(i<n){
            if(t[i]!=t[n]){
                return false;
            }
            i++;
            n--;
        }
        return true;
    }
    void dhruv(string s1,vector<string>v){
        if(s1.size()==0){
             res.push_back(v);
             return;
        }
        string curr= "";
        for(int i=0;i<s1.size();i++){
            curr+=s1[i];
            if(isplanidrome(curr)){
                v.push_back(curr);
                dhruv(s1.substr(i+1),v);
                v.pop_back();
                
            }
            
            
        }
       // return v;
    }
    vector<vector<string>> allPalindromicPerms(string s) {
        // code here
        vector<string>v;
        if(s.size()!=0){
            dhruv(s,v);
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin>>S;

        Solution ob;
        vector<vector<string>> ptr = ob.allPalindromicPerms(S);
        
        for(int i=0; i<ptr.size(); i++)
        {
            for(int j=0; j<ptr[i].size(); j++)
            {
                cout<<ptr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends