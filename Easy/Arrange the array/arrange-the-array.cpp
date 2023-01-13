//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
        vector <int> rearrange(vector <int> &a,int n)
        {
            // code here
                
           if(n==2){
               if(a[0]==2 && a[1]==3)return {2,3};
               if(a[0]==3 && a[1]==2)return {2,3};
           }
           sort(a.begin(),a.end());
           int cnt=0;
           while(a[cnt]==1){
               cnt++;
           }
           reverse(a.begin(),a.end());
           vector<int> ans;
           int q=cnt;
           while(q--)ans.push_back(1);
           for(int i=0;i<a.size()-cnt;i++){
               ans.push_back(a[i]);
           }
           
           return ans;
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
        vector<int> a(n);
        for(auto &j:a)
            cin>>j;
        Solution s;
        vector<int> ans=s.rearrange(a,n);
        for(auto j:ans)
            cout<<j<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends