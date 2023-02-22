//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends


int findElement(int arr[], int n) {
    int maxi= INT_MIN;
    int mini= INT_MAX;
    int ans=0;
    int left[n];
    int right[n];
   
     for(int i=0;i<n;i++)

    {

        maxi=max(maxi,arr[i]);

        left[i]=maxi;

        

    }

    for(int i=n-1;i>=0;i--)

    {

        mini=min(mini,arr[i]);

        right[i]=mini;

    }
    for(int i=1;i<n-1;i++){
        if(left[i-1]<=arr[i] && right[i+1]>=arr[i]){
            ans=arr[i];
            return ans;
        }
    }
    return -1;
    
    
    
    
}