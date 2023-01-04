//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s) {
        // Your code here
        stack<char> st;

        string ans;

        for(int i=0;i<s.size();i++)

        {

            if(s[i]!='+'&&s[i]!='-'&&s[i]!='*'&&s[i]!='/'&&s[i]!=')'&&s[i]!='('&&s[i]!='^')

            ans+=s[i];

            else

            {

                if(st.empty())

                st.push(s[i]);

                else

                {

                    if(s[i]=='+')

                    {

                        if(!st.empty()&&(st.top()=='('||st.top()==')'))

                        st.push('+');

                        else

                        {

                           while(!st.empty()&&!(st.top()=='('))

                            {

                                ans+=st.top();

                                st.pop();

                            }

                            st.push('+');

                        }

                    }

                    else if(s[i]=='-')

                    {

                        if(!st.empty()&&(st.top()=='('||st.top()==')'))

                        st.push('-');

                        else

                        {

                            while(!st.empty()&&!(st.top()=='('))

                            {

                                ans+=st.top();

                                st.pop();

                            }

                            st.push('-');

                        }

                    }

                    else if(s[i]=='^')

                    {

                        st.push('^');

                    }

                    else if(s[i]=='*')

                    {

                        if(st.top()=='-'||st.top()=='+'||st.top()=='('||st.top()==')')

                        st.push('*');

                        else

                        {

                            while(!st.empty()&&!(st.top()=='-'||st.top()=='+'||st.top()=='('||st.top()==')'))

                            {

                                ans+=st.top();

                                st.pop();

                            }

                            st.push('*');

                        }

                    }

                    else if(s[i]=='/')

                    {

                        if(st.top()=='-'||st.top()=='+'||st.top()=='('||st.top()==')')

                        st.push('/');

                        else

                        {

                            while(!st.empty()&&!(st.top()=='-'||st.top()=='+'||st.top()=='('||st.top()==')'))

                            {

                                ans+=st.top();

                                st.pop();

                            }

                            st.push('/');

                        }

                    }

                    else if(s[i]==')')

                    {

                        while(!st.empty()&&(st.top()!='('))

                        {

                            ans+=st.top();

                            st.pop();

                        }

                        st.pop();

                    }

                    else if(s[i]=='(')

                    {

                        st.push('(');

                    }

                }

            }

        }

        while(!st.empty())

        {

            ans+=st.top();

            st.pop();

        }

        return ans;
    }
};


//{ Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}

// } Driver Code Ends