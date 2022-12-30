//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int maxSumPairWithDifferenceLessThanK(int arr[], int N, int K)
    {
        // Your code goes here  
        sort(arr,arr+N,greater<int>());
    vector<int>a;
    for(int i=0;i<N-1;i++){
        if(arr[i]-arr[i+1]<K){
            a.push_back(arr[i+1]);
            a.push_back(arr[i]);
            i++;
        }
    }
    return accumulate(a.begin(),a.end(),0);
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		int arr[N];
		for(int i=0;i<N;i++)
		cin>>arr[i];

		int K;
		cin>>K;
        Solution ob;
		cout<<ob.maxSumPairWithDifferenceLessThanK(arr,N,K)<<endl;
	}
	return 0;
}

// } Driver Code Ends