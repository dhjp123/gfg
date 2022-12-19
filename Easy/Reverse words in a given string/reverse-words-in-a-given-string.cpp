//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
         string ans = "";
        stack<char>st;
        int i = s.length() - 1;
        while(i>=0){
            if(s[i]!='.'){
                st.push(s[i]);
            }
            else if(s[i]=='.'){
                while(!st.empty()){
                    ans+=st.top();
                    st.pop();
                }
                ans+=".";
            }
            i--;
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
        
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends