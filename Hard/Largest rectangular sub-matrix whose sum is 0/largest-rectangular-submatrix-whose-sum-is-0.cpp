//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
  vector<vector<int>> sumZeroMatrix(vector<vector<int>> a){
      //Code Here
        int n=a.size(),m=a[0].size();
     vector<vector<int>>v(n,vector<int>(m));
     for(int i=0;i<n;i++){
         for(int j=0;j<m;j++)v[i][j]=a[i][j];
     }
     for(int i=0;i<n;i++){
         for(int j=0;j<m;j++)v[i][j]+=v[i][j-1];
     }
     int ar=0,xs=-1,xe=-1,ys=-1,ye=-1;
     for(int i=0;i<m;i++){
         for(int j=i;j<m;j++){
             unordered_map<int,int>m;
             int su=0;
             m[su]=-1;
             for(int k=0;k<n;k++){
                 if(i!=0)su+=v[k][j]-v[k][i-1];
                 else su+=v[k][j];
                 if(m.find(su)!=m.end()){
                     int area=(j-i+1)*(k-m[su]);
                     if(area>ar){
                         ar=area;
                         xs=m[su]+1;xe=k;ys=i;ye=j;
                     }
                 }
                 m[su]=k;
             }
         }
     }
     vector<vector<int>>ans;
   //   cout<<xs<<xe<<ys<<ye;
   if(xs==-1 || xe==-1 || ys==-1 || ye==-1)return ans;
     for(int i=xs;i<=xe;i++){
         vector<int>t;
         for(int j=ys;j<=ye;j++)t.push_back(a[i][j]);
         ans.push_back(t);
     }
     return ans;
  }
};


//{ Driver Code Starts.




int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        
        vector<vector<int>> a(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        Solution ob;
        vector<vector<int>> ans = ob.sumZeroMatrix(a);
        if(ans.size() == 0){
            cout<<-1<<endl;
        }
        else{
            for(int i=0;i<ans.size();i++){
                for(int j=0;j<ans[0].size();j++){
                    cout<<ans[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
// } Driver Code Ends