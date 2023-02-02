//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    // code here
	    map<int,int>mp;
	   // vector<int<v;
	    for(int i=0;i<n;i++){
	        mp[nuts[i]]++;
	    }
	    int arr[]={ '!', '#', '$' ,'%' ,'&' ,'*', '@' ,'^', '~'};
	    int z=0;
	    for(int i=0;i<9;i++){
	        if(mp[arr[i]]>0){
	           nuts[z]=arr[i];
	           bolts[z]=arr[i];
	           z++;
	            
	            
	        }
	       
	    }
	    //return v;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char nuts[n], bolts[n];
        for (int i = 0; i < n; i++) {
            cin >> nuts[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> bolts[i];
        }
        Solution ob;
        ob.matchPairs(nuts, bolts, n);
        for (int i = 0; i < n; i++) {
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends