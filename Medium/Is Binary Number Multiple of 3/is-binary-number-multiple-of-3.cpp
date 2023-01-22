//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isDivisible(string A){
	    //complete the function here
	    int od = 0, ed = 0;
    for (int counter = 0; counter < A.length(); counter++) {
    
        if (A[counter] == '1') {
            // checking if the nonzero bit is at even
            // position
            if (counter % 2 == 0) {
                ed++;
            }
            else {
                od++;
            }
        }
    }
    // Checking if the difference of non-zero oddbits and
    // evenbits is divisible by 3.
    if (abs(od - ed) % 3 == 0) {
       // cout << "Yes" << endl;
       return true;
    }
    else {
        return false;
        //cout << "No" << endl;
    }
	}

};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends