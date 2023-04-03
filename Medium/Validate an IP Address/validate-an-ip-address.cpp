//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            // code here
              string ans;

            int count=0;

            for(int i=0;i<s.length();i++){

                if(s[i]!='.')ans+=s[i];

                if(s[i]=='.')count++;

                if(s[i]=='.' || i==s.length()-1){

                    if(ans.length()>1 && ans[0]=='0')return 0;

                    if(ans.length()==0 || ans.length()>3)return 0;

                    if(int(ans[0])<'0' || int(ans[0])>'9')return 0;

                    if(ans.length()==2){

                        if(int(ans[1])<'0' || int(ans[1])>'9')return 0;

                    }

                    if(ans.length()==3){

                        if(int(ans[2])<'0' || int(ans[2])>'9')return 0;

                    }

                    

                    int num=stoi(ans);

                    if(num<0 || num>255){

                        return 0;

                    }

                    ans="";

                }

            }

            if(count!=3)return 0;

            return 1;
        }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}
// } Driver Code Ends