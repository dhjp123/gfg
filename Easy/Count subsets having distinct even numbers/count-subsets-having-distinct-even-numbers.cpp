//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
#define ll long long

long long countSubsets(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        cout << countSubsets(a, n) << endl;
    }

    return 0;
}
// } Driver Code Ends


// User function Template for C

long long power(long long int x,long long int y){
  long long int ans=1;
  for(long long int i=1;i<=y;i++)ans*=x;return ans;
}
long long countSubsets(int a[], int n) {
  
     set<int>s;
  
  for(int i=0; i<n; i++){
     if(a[i]%2==0){
          s.insert(a[i]);
     }
  }
  
  long long x=s.size();
  
 long long even_count=power(2,x)-1;
  
 return even_count;


}