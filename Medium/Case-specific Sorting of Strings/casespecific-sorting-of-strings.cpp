//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
         string sma;
        string cap;
        for(int i=0; i<n; i++){
            if(str[i]>96)
                sma.push_back(str[i]);
            else
                cap.push_back(str[i]);
        }
        sort(sma.begin(), sma.end());
        sort(cap.begin(), cap.end());
        int cj = 0, sj = 0;
        for(int i=0; i<n; i++){
            if(str[i]>96){
                str[i] = sma[sj];
                sj++;
            }
            else{
                str[i] = cap[cj];
                cj++;
            }
        }
        return str;
        // your code here
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends