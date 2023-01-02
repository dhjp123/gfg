//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        // Your code here
         unordered_map<char, int> mp;
        for(auto &e : p){
            mp[e]++;
        }
        int n = s.length();
        int cnt = 0;
        int i = 0;
        int ans = INT_MAX;
        int startIndex = n;
        int endIndex = 0;
        for(int j = 0; j < n; j++){
            if(mp.count(s[j])){
                mp[s[j]]--;
                if(mp[s[j]] == 0){
                    cnt++;
                }
            }
            while(cnt == mp.size() && i <= j){
                if(ans > j - i + 1){
                    startIndex = i;
                    endIndex = j;
                    ans = j - i + 1;
                }
                if(mp.count(s[i])){
                    mp[s[i]]++;
                    if(mp[s[i]] > 0){
                        cnt--;
                    }
                }
                i++;
            }
        }
        string resultString = "";
        for(int i = startIndex; i <= endIndex; i++){
            resultString += s[i];
        }
        return ans == INT_MAX ? "-1" : resultString;
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends