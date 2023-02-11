//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/

// arr[] : the input array containing 0s and 1s
// N : size of the input array

// return the maximum length of the subarray
// with equal 0s and 1s
class Solution{
  public:
    int maxLen(int a[], int n)
    {
        unordered_map<int,int>mp;
        int one=0;
        int ze=0;
        int res=0;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                one++;
            }
            else{
                ze++;
            }
            int sub=one-ze;
            if(sub==0)
            {
               res=i+1;
            
            }
            if(mp.find(sub)==mp.end()){
                mp.insert({sub,i});
                
            }
            if(mp.find(sub)!=mp.end()){
                res=max(res,i-mp[sub]);
            }
        }
        return res;
        
        
        // Your code here
    }
};


//{ Driver Code Starts.

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.maxLen(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends