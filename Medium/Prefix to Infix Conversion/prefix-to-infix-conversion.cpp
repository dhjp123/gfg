//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    
       bool isOperator(char ch)

   {

       if(ch=='+'||ch=='-'||ch=='*'||ch=='/')

       {

            return true;

       }

        return false;

   }

    string preToInfix(string s) {

        // Write your code here

         stack<string> st;

           string result="";

           for(int i=s.length()-1;i>=0;i--)

           {

                  char ch=s[i];

                 if(isOperator(ch))

                 {

                        string str1= st.top(); st.pop();

                        string str2= st.top(); st.pop();

                         string temp="("+str1+s[i]+str2+")";

                         st.push(temp);

                 }

                  else

                  {

                    st.push(string(1,s[i])); 

                  }

           }

            while(!st.empty())

            {

                result+=st.top();

                st.pop();

            }

            return  result;

    }    
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToInfix(prefix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends