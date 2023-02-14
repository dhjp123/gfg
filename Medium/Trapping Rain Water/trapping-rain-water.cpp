//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        int leftmax[n];
        int rightmax[n];
        leftmax[0]=arr[0];
        for(int i=1;i<n;i++){
            leftmax[i]=max(arr[i],leftmax[i-1]);
        }
        rightmax[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            rightmax[i]=max(arr[i],rightmax[i+1]);
        }
        vector<long long int>water(n);
        for(int i=0;i<n;i++){
            water[i] =(min(leftmax[i],rightmax[i])-arr[i]);
            
        }
        long long int sum=0;
        for(int i=0;i<n;i++){
            sum+=water[i];
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends