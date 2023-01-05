//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    string longestString(vector<string> &words)
    {
        // code here
         map<string, int> m1;

        for(auto it: words)

        {

            m1[it] = 1;

        }

        string ans = "";

        int cnt = 0;

        for(auto it: m1)

        {

            string s = it.first;

            string k = "";

            bool f = true;

            for(int i=0;i<s.length();i++)

            {

                k += s[i];

                if(!m1[k]){

                    f = false;

                    break;

                }

            }

            if(f){

                if(cnt < s.length()) {ans = s;cnt = s.length();}

            }

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
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution obj;
        string w = obj.longestString(v);
        cout << w << "\n";
    }
    return 0;
}

// } Driver Code Ends