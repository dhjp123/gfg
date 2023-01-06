//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long  kthSmallest(long long  arr[], long long  l, long long  r, long long  k) {
        //code here
        priority_queue<long long >q;
        for(long long  i=0;i<=r;i++){
            q.push(arr[i]);
            if(q.size()>k){
                q.pop();
            }
        }
        return q.top();
    }
    long long sumBetweenTwoKth( long long arr[], long long n, long long k1, long long k2)
    {
        // Your code goes here
        long long sum=0;
        int first=kthSmallest(arr,0,n-1,k1);
        int second=kthSmallest(arr,0,n-1,k2);
        for(long long i=0;i<n;i++){
            if(arr[i]>first && arr[i]<second){
                sum+=arr[i];
            }
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        cin>>n;
        long long a[n+5];
        for(int i =0;i<n;i++)
            cin >> a[i];
        
        long long k1, k2;
        cin >> k1 >> k2;
        Solution ob;
        cout << ob.sumBetweenTwoKth(a, n, k1, k2) << endl;
        
    }
	return 0;
}

// } Driver Code Ends