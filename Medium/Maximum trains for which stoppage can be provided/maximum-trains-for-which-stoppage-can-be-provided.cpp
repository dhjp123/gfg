//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Matrix
{
public:
    template <class T>
    static void input(vector<vector<T>> &A,int n,int m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d ",&A[i][j]);
            }
        }
    }
 
    template <class T>
    static void print(vector<vector<T>> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            for (int j = 0; j < A[i].size(); j++)
            {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends
class Solution {
  public:
    int maxStop(int n, int m, vector<vector<int>> &t) {
        // code here
        vector<int>plat(n+1,-1);
       vector<pair<int,int>>v;
       for(int i = 0;i < t.size();i++)
       {
           v.push_back({t[i][1],i});
       }
       int ans = 0;

       sort(v.begin(),v.end());
       for(int i = 0;i < v.size();i++)
       {
           if(plat[t[v[i].second][2]] <= t[v[i].second][0])
           {
               ans++;
               plat[t[v[i].second][2]] = v[i].first;
           }
       }
       return ans;
   


    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n; 
        scanf("%d",&n);
        
        
        int m; 
        scanf("%d",&m);
        
        
        vector<vector<int>> trains(m, vector<int>(3));
        Matrix::input(trains,m,3);
        
        Solution obj;
        int res = obj.maxStop(n, m, trains);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends