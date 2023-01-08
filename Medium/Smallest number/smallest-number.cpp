//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string smallestNumber(int S, int D){
        // code here 
        string str(D, '0');
     if (9 * D < S) return "-1";
    str[0] = '1';
    S -= 1;
    int i;
    for (i = D - 1;i>=0; i--) {
        if (S > 9) {
            str[i] = '9';
            S -= 9;
        }
        else {
            str[i] = S + '0';
            if(i==0) str[i]++;
            break;
        }
    }
    return str;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.smallestNumber(S,D) << endl;
    }
    return 0; 
} 
// } Driver Code Ends