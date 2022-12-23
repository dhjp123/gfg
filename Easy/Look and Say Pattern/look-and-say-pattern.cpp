//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    string lookandsay(int n) {
        // code here
        string ans = "1";
        n--;
        while(n--){
            string curr = "";
            int cnt = 1;
            for(int i = 1; i <= ans.length(); i++){
                if(i == ans.length()){
                    curr += to_string(cnt);
                    curr += ans.back();
                }
                else if(ans[i] == ans[i - 1]){
                    cnt++;
                }
                else{
                    curr += to_string(cnt);
                    curr += ans[i - 1];
                    cnt = 1;
                }
            }
            ans = curr;
        }
        return ans;
    }   
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution obj;
        cout<<obj.lookandsay(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends