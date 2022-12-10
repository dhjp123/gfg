//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string buildLowestNumber(string num, int k);
// Driver program to test above function
int main()
{
    int t,n;
    string str;
    cin>>t;
    while(t--)
    {
    cin>>n;
    cin>>str;
    cout << buildLowestNumber(str, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends



string buildLowestNumber(string num, int k)
{
   stack<char>st;
       st.push(num[0]);
       for(int i=1;i<num.size();i++){
           while(!st.empty() and k and num[i]<st.top()){
               st.pop(); k--;
           }
           st.push(num[i]);
       }
       while(k--){
           st.pop();
       }
       string ans="";
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        int x=ans.size();
        while(x--){
            if(ans[0]=='0') ans.erase(0,1);
        }
        if(ans.empty()) return "0";
        return ans;
}