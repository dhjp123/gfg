//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int isRepresentingBST(int arr[], int n)
    {
        int flag=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]>=arr[i+1]){
                flag=1;
                
            }
        }
        if(flag==1){
            return false;
        }
        else{
            return true;
        }
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int arr[N];
        for(int i=0;i<N;i++)cin>>arr[i];
        Solution ob;
        cout<<ob.isRepresentingBST(arr,N)<<endl;
    }
    return 0;
}
// } Driver Code Ends