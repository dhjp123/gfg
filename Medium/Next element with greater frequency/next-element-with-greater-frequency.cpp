//{ Driver Code Starts
#include <bits/stdc++.h>
#define N 10000
using namespace std;


// } Driver Code Ends
class Solution{
public:
    vector<int> print_next_greater_freq(int arr[],int n)
    {
        
         stack<int> st;
        map<int,int> mp;
        for(int i=0;i<n;i++)
            mp[arr[i]]++;
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty()  &&  mp[st.top()]<=mp[arr[i]])
                st.pop();
            int x=st.empty()?-1:st.top();
            ans[i]=x;
            st.push(arr[i]);
        }
        return ans;
    
    }
};


//{ Driver Code Starts.

int main()
{
    int arr[N];
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans=ob.print_next_greater_freq(arr,n);
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout << endl;
    }
	return 1;
}

// } Driver Code Ends