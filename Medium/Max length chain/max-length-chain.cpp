//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct val{
	int first;
	int second;
};


// } Driver Code Ends
/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

class Solution{
public:
    /*You are required to complete this method*/
    static bool comp(pair<int,int>a, pair<int,int>b){

        return a.second < b.second;

    }

    
    int maxChainLen(struct val p[],int n){
        //Your code here
         vector<pair<int,int>>vp;

        for(int i=0;i<n;i++)

            vp.push_back({p[i].first, p[i].second});

        sort(vp.begin(),vp.end(),comp);

        int a = vp[0].second, c = 1;

        for(int i=1;i<n;i++){

            if(vp[i].first > a){

                c++;

                a = vp[i].second;

            }

        }

        return c;

    
        
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		Solution ob;
		cout<<ob.maxChainLen(p,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends