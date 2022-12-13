//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int splitArray(int arr[] ,int N, int K) {
        // code here
        int start = *max_element(arr, arr+N), 
            end = accumulate(arr, arr+N, 0);
        int ans, mid, temp, cnt;
        while(start <= end){
            mid = start + (end - start)/2, 
            temp = 0, 
            cnt = 1;
            
            for(int i=0; i<N; i++)
                if(temp + arr[i] <= mid)
                    temp += arr[i];
                else 
                    temp = arr[i], cnt++;
            
            if(cnt <= K) 
                ans = mid, end = mid-1;
            else 
                start = mid+1;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends