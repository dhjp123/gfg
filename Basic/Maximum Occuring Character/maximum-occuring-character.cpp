//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
       map<char,int>mp;
       int maxi=-1;
       for(int i=0;i<str.length();i++){
           mp[str[i]]++;
       }
       char s;
       for(auto i:mp){
           if(i.second>maxi){
               maxi=max(maxi,i.second);
               s=i.first;
           }
           
           
           
           
       }
       return s;
        
        
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends