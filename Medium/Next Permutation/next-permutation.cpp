//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int n, vector<int> arr){
        // code here
        int j=-1;
        for(int i=n-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                j=i;
                break;
            }
        }
        if(j==-1){
            reverse(arr.begin(),arr.end());
            return arr;
        }
        for(int i=n-1;i>j;i--){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
                break;
            }
        }
        reverse(arr.begin()+1+j,arr.end());
        return arr;
        
        
       
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends