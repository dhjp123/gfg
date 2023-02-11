//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        unordered_map<string ,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int res1=INT_MIN;
        int res2=INT_MIN;
        string ans="";
        for(auto i:mp){
            res1=max(res1,i.second);
            
            
        }
        for(auto i:mp){
              if(i.second>res2 && i.second!=res1){
                res2=i.second;
                ans=i.first;
            }
            
        }
          
          
        
        return ans;
        //code here.
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends