//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


vector<int> Smallestonleft(int arr[], int n);


int main() {
	
	int t;
	
	cin >> t;
	
	while(t--){
	    
	    int n;
	    cin >> n;
	    int arr[n+1];
	    
	    for(int i=0;i<n;i++){
	        cin>> arr[i];
	    }
	    
	    vector<int> b;
	    b = Smallestonleft(arr, n);
	    for(int i=0;i<n;i++)
	        cout << b[i] << " ";
	       
	    cout << endl;
	    
	    
	}
	
	return 0;
}
// } Driver Code Ends


vector<int> Smallestonleft(int arr[], int n)
{
    // Complete the function
   // int n = nums.size();
       
       set<int, greater<int>>s;
   vector<int>v;
   s.insert(-1);
   set<int, greater<int> >::iterator itr;
   for(int i=0 ;i<n ;i++){
        itr = s.upper_bound(arr[i]);
        v.push_back(*itr);
        s.insert(arr[i]);
   }
   return v;
}
        
        
