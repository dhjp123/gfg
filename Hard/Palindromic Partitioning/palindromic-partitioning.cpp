//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int t[1001][1001];
    bool isplaindrome(string &s,int i,int j)
    {
        while(i<j){

            if(s[i]==s[j]){

                i++;

                j--;

            }

            else{

                return false;

            }

        }

        return true;

    }
        
        
    
    int solve(string &s ,int i,int j){
        if(i>j){
            return 0;
        }
        if(isplaindrome(s,i,j))
        {
            return 0;
        }
        
        if(t[i][j]!=-1){
            return t[i][j];
        }
        int ans=INT_MAX;
        for(int k=i;k<j;k++){
            if(isplaindrome(s,i,k)==false){
                continue;
            }
            int temp=1+solve(s,i,k)+solve(s,k+1,j);
            ans=min(ans,temp);
        }
        return t[i][j]=ans;
    }
    int palindromicPartition(string str)
    {
        // code here
        memset(t,-1,sizeof(t));
        int n=str.length();
        int dhruv;
        dhruv= solve(str,0,n-1);
        return dhruv;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends