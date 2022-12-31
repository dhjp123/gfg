//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int t[101][101];
    int freqsum(int i,int j,int freq[]){
        int sum=0;
        for(int k=i;k<=j;k++){
            sum+=freq[k];
        }
        return sum;
    }
    int dhruv(int i,int j,int freq[]){
        if(i>j){
            return 0;
        }
        if(i==j){
            return t[i][j]=freq[i];
        }
        if(t[i][j]!=-1){
            return t[i][j];
        }
        int weight= freqsum(i,j,freq);
        int ans= INT_MAX;
        for(int k=i;k<=j;k++){
            int temp= dhruv(i,k-1,freq)+dhruv(k+1,j,freq);
            ans= min(temp,ans);
            
        }
        return t[i][j]= ans+weight;
        
    }
    int optimalSearchTree(int keys[], int freq[], int n)
    {
        // code here
        memset(t,-1,sizeof(t));
        return dhruv(0,n-1,freq);
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
        cin >> n;
        int keys[n];
        for(int i=0;i<n;i++)cin>>keys[i];
        int freq[n];
        for(int i=0;i<n;i++)cin>>freq[i];
        Solution ob;
        cout<<ob.optimalSearchTree(keys, freq, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends