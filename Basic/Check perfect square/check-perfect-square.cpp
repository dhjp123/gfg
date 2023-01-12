//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int checkPerfectSquare(int n){
        // code here 
        
         int i=1;
        int j=n;
        long mid;
        while(j>=i){
            mid=j+(i-j)/2;
            if(mid*mid==n){
                return true;
            }
            if(mid*mid>n){
                j=mid-1;
            }
            else i=mid+1;
        }
    return false;}
        
    
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
        Solution ob;
        cout << ob.checkPerfectSquare(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends