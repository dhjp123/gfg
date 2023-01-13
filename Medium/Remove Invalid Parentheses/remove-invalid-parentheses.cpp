//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
    }
 
    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            if(i!=A.size()-1) cout << A[i]<< " ";
            else cout << A[i];
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int find_removals(string s){
       stack<char>st;
       for(int i=0;i<s.length();i++){
           if(s[i]=='(')
               st.push(s[i]);
           else if(s[i]==')'){
               if(!st.empty() && st.top()=='(')
                   st.pop();
               else
                   st.push(s[i]);
           }
       }
       return st.size();
   }
   void solve(string s,vector<string>&ans,unordered_map<string,int>&mp,int ap){
       if(mp[s])
           return;
       mp[s]=1;
       if(ap==0){
           int balanced=find_removals(s);
           if(balanced==0)
               ans.push_back(s);
           return;     
       }
        for(int i=0;i<s.length();i++)
        {
           string l=s.substr(0,i);
           string r=s.substr(i+1);
           string jt=l+r;
           solve(jt,ans,mp,ap-1);
        }
   }
   vector<string> removeInvalidParentheses(string s) {
       // code here
       unordered_map<string,int>mp;
       int min_removals=find_removals(s);
       vector<string>ans;
       solve(s,ans,mp,min_removals);
       sort(ans.begin(),ans.end());
       return ans;
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
        vector<string> res = obj.removeInvalidParentheses(s);
        
        Array::print(res);
        
    }
}

// } Driver Code Ends