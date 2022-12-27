//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int t[10001];
    int slove(int n,int x,int y,int z){
        if(n==0){
            return 0;
            
        }
        if(n<0){
            return INT_MIN;
        }
        if(t[n]!=-1){
            return t[n];
        }
        int a=slove(n-x,x,y,z)+1;
        int b=slove(n-y,x,y,z)+1;
        int c=slove(n-z,x,y,z)+1;
        int ans= max(a,max(b,c));
        return t[n]=ans;
        
    }
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        memset(t,-1,sizeof(t));
        int res= slove(n,x,y,z);
        if(res<0){
            return 0;
        }
        else{
            return res;
        }
        
    }
};

//{ Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}
// } Driver Code Ends