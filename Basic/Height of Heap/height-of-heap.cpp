//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
 int helper(int arr[], int n, int idx, int& height, int current) {
        if(idx >= n)
            return 0;
            
        int left = helper(arr, n, 2*idx + 1, height, current + 1);
        int right = helper(arr, n, 2*idx + 2, height, current + 1);
        
        height = max(height, current);
        
    }
    
    int heapHeight(int N, int arr[]) {
        int height = 0;
        helper(arr, N, 0, height, 0);
        
        return height;
    }

};

//{ Driver Code Starts.

int main() { 
    int t;
    cin>>t;
    while(t--){
        int N;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.heapHeight(N, arr) << endl;
    }
    return 0; 
} 

// } Driver Code Ends