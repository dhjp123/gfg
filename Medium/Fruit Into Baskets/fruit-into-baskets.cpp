//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int totalFruits(int n, vector<int> &fruits){
        unordered_map<int,int>mp;
        int i=0;
        int j=0;
        int res=0;
        while(j<n){
            mp[fruits[j]]++;
            if(mp.size()>2){
                  mp[fruits[i]]--;

                if(mp[fruits[i]]==0){

                    mp.erase(fruits[i]);

                }

                i++;

            }

            res=max(res,j-i+1);

            j++;

        }
                
                
                
            
            
        
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> fruits(N);
        for (int i = 0; i < N; i++) cin >> fruits[i];
        Solution obj;
        cout << obj.totalFruits(N, fruits) << endl;
    }
    return 0;
}

// } Driver Code Ends