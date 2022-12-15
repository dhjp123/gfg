//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    string chooseandswap(string s)
    {
        int i, j;
       bool ans=false;
       vector<int> index(26, -1);
       for (i=0; i<s.size(); i++){
           if (index[s[i]-'a']==-1){
               index[s[i]-'a']=i;
           }
       }
       for (i=0; i<s.size(); i++){
           for (j=0; j<s[i]-'a'; j++){
               if (index[j]>index[s[i]-'a']){
                   ans=true;
                   break;
               }
           }
           if (ans){
               break;
           }
       }
       if (ans){
           char c1=s[i];
           char c2=(char)(j+'a');
           for (i=0; i<s.size(); i++){
               if (s[i]==c1){
                   s[i]=c2;
               }
               else if (s[i]==c2){
                   s[i]=c1;
               }
           }
           return s;
       }
       return s;
   
        // Code Here
    }
    
};


//{ Driver Code Starts.

int main()
{
    Solution obj;
	int t;
	cin >> t;
	while(t--)
	{	
	    string a;
		cin >> a;
		cout << obj.chooseandswap(a) << endl;
	}
	return 0;
}

// } Driver Code Ends