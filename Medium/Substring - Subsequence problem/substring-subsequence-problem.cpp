//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    //int t[1001][1001];
    int getLongestSubsequence(string a, string b) {
       // memset(t,-1,sizeof(t));
       
        int n=a.length();
        int m=b.length();
        int maxi= 0;
        if(n==0||m==0){
            return 0;
        }
        int t[n+1][m+1];
      
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0||j==0){
                    t[i][j]= 0;
                }
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(a[i-1]==b[j-1]){
                    t[i][j]=1+t[i-1][j-1];
                    maxi=max(maxi,t[i][j]);
                }
                else{
                    t[i][j]=t[i-1][j];
                }
                
            }
        }
        return maxi;
        
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string A,B;

        cin >>A>>B;

        Solution ob;
        cout << ob.getLongestSubsequence(A,B) << endl;
    }
    return 0;
}
// } Driver Code Ends