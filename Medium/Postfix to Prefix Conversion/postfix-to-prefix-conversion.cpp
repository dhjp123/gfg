//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string postToPre(string post) {
        // Write your code here
        stack<string> s;

        int n = post.length();

        int i=0;

        while(i<n)

        {

            if(post[i]=='+' || post[i]=='-'|| post[i]=='*' || post[i]=='/')

            {

                string s1 = s.top();

                s.pop();

                string s2 = s.top();

                s.pop();

                

                string temp = post[i]+s2+s1;

                s.push(temp);

                i++;

            }

            else

            {   string dhruv;

                dhruv+=post[i];

                s.push(dhruv);

                i++;

            }

        }

        return s.top();

    }
    
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string postfix;
        cin >> postfix;

        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToPre(postfix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends