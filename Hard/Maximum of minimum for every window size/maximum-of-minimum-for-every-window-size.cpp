//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find maximum of minimums of every window size.
    
     vector<int> nextSmaller(int arr[],int n){
       stack<int> s;
       vector<int>v(n);
       s.push(-1);
       for(int i=n-1;i>=0;i--){
           int curr=arr[i];
           while( s.top()!= -1 && arr[s.top()]>=curr){
               s.pop();
           }
           v[i] = s.top();
           s.push(i);
           
           
       }
      // reverse(v.begin(),v.end());
       return v;
   }
   vector<int> prevSmaller(int arr[],int n){
       stack<int> s;
       vector<int>v;
       s.push(-1);
       for(int i=0;i<n;i++){
           int curr=arr[i];
           while( s.top()!= -1 && arr[s.top()]>=curr){
               s.pop();
           }
           v.push_back(s.top());
           s.push(i);
           
           
       }
      
       return v;
   }
   vector <int> maxOfMin(int arr[], int n)
   {
       // Your code here
       vector<int>ns = nextSmaller(arr,n);
       vector<int>ps = prevSmaller(arr,n);
       vector<int>v(n);
       for(int i=0;i<n;i++){
           if(ns[i]==-1){
               ns[i]=n;
           }
           v[i]=ns[i]-ps[i] -1;
           
       }
       vector<int>res(n+1,0);
       for(int i=0;i<n;i++){
           res[v[i]]=max(res[v[i]],arr[i]);
       } 
       for(int i=n-1;i>=1;i--){
           res[i]=max(res[i],res[i+1]);
       }
       vector<int>a(n);
       for(int i=1;i<=n;i++){
           a[i-1]=res[i];
       }
       return a;
   }
        
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        vector <int> res = ob.maxOfMin(a, n);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends