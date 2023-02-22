//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the total number of possible unique BST. 
    int numTrees(int n) 
    {
       
        const int mod=1e9+7;

        vector<long long>dhruv(n+1,0);

        dhruv[0]=1;

        dhruv[1]=1;

 

    for (int i = 2; i <= n; i++)

    {

        for (int j = 0; j < i; j++)

        {

            dhruv[i]=(dhruv[i]+ (dhruv[j]*dhruv[i-j-1])%mod)%mod;

        }

        

    }

    

    return dhruv[n]%mod;
    }
};

//{ Driver Code Starts.
#define mod (int)(1e9+7)
int main(){
    
    //taking total testcases
    int t;
    cin>>t;
    while(t--){
        
        //taking total number of elements
        int n;
        cin>>n;
        Solution ob;
        //calling function numTrees()
        cout<<ob.numTrees(n)<<"\n";
    }
}	
// } Driver Code Ends