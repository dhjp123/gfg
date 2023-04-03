//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string checkFibonacci(int N){
         int a=0, b=1, fib;

        while(fib<=N){

            fib=a+b;

            a=b;

            b=fib;

            if(fib==N)

            return "Yes";

        }

         return "No";
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.checkFibonacci(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends