//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
void rotate (vector<vector<int> >& matrix);


// } Driver Code Ends
//User function template for C++

/* matrix : given input matrix, you are require 
 to change it in place without using extra space */
void rotate(vector<vector<int> >& mat)
{
    int n= mat.size();
   // int m= mat[0].size();
    
    vector<vector<int>>ans{mat};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[i][j]=mat[j][n-i-1];
        }
    }
   // int k= ans.size();
   // int r= ans[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mat[i][j]=ans[i][j];
        }
    }
}


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t; 
    while(t--)
    {
        int n;
        cin>>n; 
        vector<vector<int> > matrix(n);
        for(int i=0; i<n; i++)
        {
            matrix[i].resize(n);
            for(int j=0; j<n; j++)
                cin>>matrix[i][j]; 
        }
        rotate(matrix);
        for (int i = 0; i < n; ++i)
        {
            for(int j=0; j<n; j++)
                cout<<matrix[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}


// } Driver Code Ends