//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    // code here
	    map<int, vector<int>> mp;     

     int sum=0;

     for(int i=0;i<n;i++){

         vector<int> temp;

         int sum=0;

         while(a[i]>=0 and i<n){

             sum += a[i];

             temp.push_back(a[i]);

             i++;

         }

         if(sum>0 and mp.find(sum)==mp.end())

             mp[sum]=temp;

         else if(sum>0 and mp[sum].size()<temp.size()) {

             mp[sum]=temp;

         } 

     }     

     if(mp.size()<1) return {-1};

 

     vector<int> res;

     int count=INT_MIN;

     for(auto it: mp){

         if(it.first>count){

             res=it.second;

             count=it.first;

         }

     }         

     return res;
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends