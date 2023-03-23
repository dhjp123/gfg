//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    string kthPermutation(int n, int k)
    {
        // code here
         int fact = 1;

        

        vector<int>number;

        

        for(int i=1;i<n;i++)
        {
            fact *=i;
            number.push_back(i);

        }

        
         
 

          number.push_back(n);

          

        k = k-1;

        

        string ans;

        

        while(true)

        {

            ans = ans + to_string(number[k/fact]);

            number.erase(number.begin()+k/fact);

            

            if(number.size()==0)

              break;

              

            k = k % fact;

            fact = fact / number.size();

            

         }

         

         return ans;

 

    }
        
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        Solution ob;
        string ans = ob.kthPermutation(n, k);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends