//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
public:
  long long countSubstring(string s){
        long long ans=0;

    unordered_map<long long,long long>mp;

    vector<long long> dp(s.size(),0);

    long long sum=-1;

    if(s[0]=='1'){

         dp[0]=1;

         ans=1;

         sum=1;

    }

    mp[sum]=0;

    mp[0]=-1;

    for(int i=1;i<s.size();i++){

        long long tp=0;

        if(s[i]=='0')

            sum-=1;

        else

            sum+=1;

        if(s[i]=='0'){

            if(mp.find(sum)!=mp.end()){

                if(mp[sum]!=-1){

                    tp+=dp[mp[sum]];

                }

            }

        }else{

            if(mp.find(sum)!=mp.end()){

                if(mp[sum]!=-1){
                     tp=tp+dp[mp[sum]]+i-mp[sum]-1;

                }else{

                    tp=tp+i-mp[sum]-1;

                }

            }else{

                tp+=i+1;

            }

        }

        mp[sum]=i;

        dp[i]=tp;

        ans+=tp;

    }

    return ans;

  }
    // code here
  
};

//{ Driver Code Starts.
int main() {
 ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL); 
 int t=1;
 cin>>t;
 for(int i=1;i<=t;i++){
    string S;
    cin>>S;
    Solution obj;
    long long ans =obj.countSubstring(S);
    cout<<ans<<endl;
 }
}
// } Driver Code Ends