//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

/*  Function to calculate the longest consecutive ones
*   N: given input to calculate the longest consecutive ones
*/
class Solution
{
    public:
    int maxConsecutiveOnes(int n)
    {
        // code here
        vector<int>ans;
        while(n!=0){
            int r=n%2;
            ans.push_back(r);
            n/=2;
        }
        int cnt=0;
        int t=0;
        reverse(ans.begin(),ans.end());
        int m=ans.size();
        for(int i=0;i<m;i++){
            if(ans[i]==1){
                cnt++;
            }
            if(ans[i]==0 || i==ans.size()-1){
                t=max(t,cnt);
                cnt=0;
            }
            
        }
        return t;
    }
};


//{ Driver Code Starts.

// Driver Code
int main() {
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n;
		cin>>n;//input n
		Solution obj;
		//calling maxConsecutiveOnes() function
		cout<<obj.maxConsecutiveOnes(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends