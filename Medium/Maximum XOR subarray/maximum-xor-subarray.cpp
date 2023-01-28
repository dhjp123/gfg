//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++



class Solution{   
public:
    int maxSubarrayXOR(int n, int arr[]){    
        //code here
        if(n==1){
            return arr[0];
            
        }
       // sort(arr,arr+n);
        int ans=1;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]==arr[i+1]) return arr[i];
            ans=max(arr[i],arr[i]^ans);
            maxi=max(ans,maxi);
        }
        return maxi;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, X;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.maxSubarrayXOR(N, arr) << endl;
    }
    return 0; 
} 

// } Driver Code Ends