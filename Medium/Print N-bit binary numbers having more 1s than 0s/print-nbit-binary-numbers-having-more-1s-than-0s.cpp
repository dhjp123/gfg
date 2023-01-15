//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
   void dhruv(int ones,int zeros,string op,int n,vector<string>&v){
       if(n==0){
           v.push_back(op);
           return;
           
       }
       string op1=op;
       op1.push_back('1');
       dhruv(ones+1,zeros,op1,n-1,v);
       
       if(ones>zeros){
           string op2= op;
           op2.push_back('0');
           dhruv(ones,zeros+1,op2,n-1,v);
          
       }
       return;
   }
	vector<string> NBitBinary(int n)
	{
	    // Your code goes here
	    vector<string>v;
	    string op="";
	    int ones=0;
	    int zeros=0;
	    dhruv(ones,zeros,op,n,v);
	    return v;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends