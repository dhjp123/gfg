//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int n, int k) 
    { 
    
       // Your code here
       int i=0;
       int j=n-1;
       while(i<=j){
           int mid=j-(j-i)/2;
           if(arr[mid]==k){
               return 1;
           }
           else if(arr[mid]<k){
               i=mid+1;
           }
           else{
               j=mid-1;
           }
       }
       return -1;
       
    }
};

//{ Driver Code Starts.


int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 

// } Driver Code Ends