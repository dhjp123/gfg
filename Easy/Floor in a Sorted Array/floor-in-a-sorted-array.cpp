//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
        long long int i=0;
        long long int j=n-1;
        long long int ans=-1;
        while(i<=j){
            long long int mid= j+(i-j)/2;
            if(v[mid]==x){
                ans=mid;
                break;
               // return mid; 
            }
            else if(v[mid]>x){
                j= mid-1;
            }
            else{
                
                
                
                ans=mid;
                i=mid+1;
            }
        }
        return ans;
        
    }
};


//{ Driver Code Starts.

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}
// } Driver Code Ends