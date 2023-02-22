//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int n)
{
    if(n<0){
        return {};
    }
	
	queue<string>q;
	vector<string>ans;
	q.push("1");
	int cnt=0;
	while(cnt<n){
	    string  tt= q.front();
	    ans.push_back(tt);
	    q.pop();
	    q.push(tt+"0");
	    q.push(tt+"1");
	    cnt++;
	    
	}
	return ans;
}


//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}
// } Driver Code Ends