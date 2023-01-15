//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int checkRedundancy(string s) {
        stack<char> st;

        int n=s.length();

        for(int i=0;i<n;i++)

        {

            if(s[i]==')')

            {

                if(!st.empty() && st.top()=='(')return true;

                while(!st.empty() && st.top()!='(') st.pop();

                st.pop();

            }

            else if(!(s[i]>='a' && s[i]<='z')) st.push(s[i]);

        }

        return false;

    
        // code here
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        
    
        string s; 
        cin>>s;
        
        Solution obj;
        int res = obj.checkRedundancy(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends