//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int dhruv(int y[],int n,int e){
        int i=0;
        int j=n-1;
        long long int  res=-1;
        //int mid= i+j/2;
        while(i<=j){
            int mid= j+(i-j)/2;
            
            
             if(y[mid]>e){
                res=mid;
                j= mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return res;
    } 
    long long countPairs(int x[], int y[], int m, int n) {
        // code here
        sort(x,x+m);
        sort(y,y+n);
        int ze=0,ow=0,thre=0,four=0,two=0;
        for(int i=0;i<n;i++){
            if(y[i]==0)ze++;
            if(y[i]==1)ow++;
            if(y[i]==3)thre++;
            if(y[i]==4)four++;
            if(y[i]==2)two++;
        }
        long long  ans=0;
        for(int i=0;i<m;i++){
            if(x[i]==0){
                continue;
            }
            else if(x[i]==1){
                ans+=ze;
                
            }
            else if(x[i]==2){
                int ind=dhruv(y,n,2);
                if(ind!=-1){
                    ans+=n-ind;
                }
                ans-=thre;
                ans-=four;
                ans+=ze+ow;
            }
            else{
                int ind= dhruv(y,n,x[i]);
                if(ind!=-1){
                    ans+=n-ind;
                    
                }
                ans+=ze+ow;
                if(x[i]==3){
                    ans+=two;
                }
                
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        int X[m], Y[n];
        for (int i = 0; i < m; i++) {
            cin >> X[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> Y[i];
        }
        Solution ob;
        auto ans = ob.countPairs(X, Y, m, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends