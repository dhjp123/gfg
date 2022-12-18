//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
  public:
    // Function to check if a palindrome pair exists
    bool palindromepair(int N, string arr[]) {
        // code here
          string ans;

        for(int i=0;i<N;i++)

        {

            for(int j=0;j<N;j++)

            {

                if(i==j || arr[i][0]!=arr[j][arr[j].size()-1]) continue;

                ans=arr[i]+arr[j];

                string s1=ans;

                reverse(s1.begin(),s1.end());

                if(s1==ans) {return 1;}

                ans="";

            }

            

        }

        return 0;

    
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
        string arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.palindromepair(N, arr) << endl;
    }
    return 0; 
} 

// } Driver Code Ends