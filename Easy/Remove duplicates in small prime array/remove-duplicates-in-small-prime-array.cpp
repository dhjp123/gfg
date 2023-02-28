//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    vector<int> removeDuplicate(vector<int>&A, int n)
    {
         vector<int>v;
       unordered_set<int>s;
       for(int i=0;i<n;i++)
       {
           if(s.find(A[i])==s.end())
           {
               s.insert(A[i]);
               v.push_back(A[i]);
           }
       }
       return v;
      
      
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        vector<int> A(N);
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        Solution obj;
        vector<int>result = obj.removeDuplicate(A,N);
        for(int i =0;i<result.size();i++)
            cout<<result[i]<<" ";
        cout<<endl;

    }
}

// } Driver Code Ends