//{ Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string s)
    {
        // Your code here
         stack<int>st;
        int n= s.length();
        for(int i=0;i<n;i++){
            if(isdigit(s[i])){
                st.push(s[i]-'0');
            }
            else{
                char chi= s[i];
                int p=st.top();
                st.pop();
                int q= st.top();
                st.pop();
                if(chi=='*'){
                    st.push(p*q);
                }
                else if(chi=='+'){
                    st.push(p+q);
                }
                else if(chi=='-'){
                    st.push(q-p);
                }else if(chi=='/'){
                    st.push(q/p);
                }
            }
        }
        return st.top();
        
    
    }
};

//{ Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends