//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
        int countWords(string a[], int n)
        {
            unordered_map<string,int>mp;
            for(int i=0;i<n;i++){
                mp[a[i]]++;
                
            }
            int cnt=0;
            for(auto i:mp){
                if(i.second==2){
                    cnt++;
                }
            }
            return cnt;
           //code here.
        }

};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string list[n];
        for(int i=0;i<n;i++)
            cin>>list[i];
        Solution ob;    
        cout <<ob.countWords(list, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends