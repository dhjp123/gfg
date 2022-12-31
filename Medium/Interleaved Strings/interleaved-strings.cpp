//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int t[1002][1002];
    bool dhruv(string A,string B,string C, int n ,int m,int c){
        if(c==0){
            return true;
        }
        if(t[n][m]!=-1){
            return t[n][m];
        }
        int a,b;
        a=b=0;
        if(n-1>=0 && A[n-1]==C[c-1]){
            a= dhruv(A,B,C,n-1,m,c-1);
        }
         if(m-1>=0 && B[m-1]==C[c-1]){
            b= dhruv(A,B,C,n,m-1,c-1);
        }
        return t[n][m]= a||b;
        
    }
    bool isInterleave(string A, string B, string C) 
    {
        //Your code here
        memset (t,-1,sizeof(t));
        int n= A.length();
        int m=B.length();
        int c= C.length();
        if(n+m!=c){
            return false;
        }
        t[n][m];
        return dhruv(A,B,C,n,m,c);
    }

};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string a,b,c;
		cin>>a;
		cin>>b;
		cin>>c;
		Solution obj;
		cout<<obj.isInterleave(a,b,c)<<endl;
	}
	// your code goes here
	return 0;
}
// } Driver Code Ends