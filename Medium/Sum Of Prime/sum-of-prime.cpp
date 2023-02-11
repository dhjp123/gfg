//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  bool isPrime(int n)
{
    // since 0 and 1 is not prime return false.
    if (n == 1 || n == 0)
        return false;
  
    // Run a loop from 2 to n-1
    for (int i = 2; i <=sqrt(n); i++) {
        // if the number is divisible by i, then n is not a
        // prime number.
        if (n % i == 0)
            return false;
    }
    // otherwise, n is prime number.
    return true;
}
  
    vector<int> getPrimes(int n) {
        int sum=0;
         vector<int> vec;
       for(int i=1;i<=n/2;i++)
       {
           if(isPrime(i) && isPrime(n-i))
           {
               vec.push_back(i);
               vec.push_back(n-i);
               return vec;
           }     
       }
       vec.push_back(-1);
       vec.push_back(-1);
       return vec;
        
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        vector<int> ptr = ob.getPrimes(N);
        cout << ptr[0]<<" "<<ptr[1] << endl;
    }
    return 0;
}
// } Driver Code Ends