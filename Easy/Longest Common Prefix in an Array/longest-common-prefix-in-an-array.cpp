//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string str="";
        
        if(N==1)
            return arr[0];
        
        int l=min(arr[0].length(),arr[1].length());
        
        for(int i=0;i<l;i++){
            if(arr[0][i]==arr[1][i])
                str+=arr[0][i];
            else
                break;
        }
        
        for(int i=1;i<N-1;i++){

            if(str=="")
                return "-1";
            
            int ln=min(str.length(),arr[i+1].length());

            string st=str;
            str="";
                    
            for(int j=0;j<ln;j++){
                        
                if(arr[i+1][j]==st[j])
                    str+=arr[i+1][j];
                            
            }
            
            if(str.length()==0)
                return "-1";
        }
        
        if(str=="")
            return "-1";
        
        return str;
    
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends