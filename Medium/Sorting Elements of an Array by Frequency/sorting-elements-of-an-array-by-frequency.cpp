//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
     static bool comp(pair<int,int>&a,pair<int,int>&b){
        if(a.second==b.second){
            return a.first<b.first;
        }
        return a.second>b.second;
    }
    vector<int> sortByFreq(int arr[],int n)
    {
        //Your code here
        vector<pair<int,int>>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            ans.push_back({arr[i],mp[arr[i]]});
        }
        sort(ans.begin(),ans.end(),comp);
        vector<int>temp;
        for(int i=0;i<n;i++){
            temp.push_back(ans[i].first);
        }
        return temp;
    }
};

//{ Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}


// } Driver Code Ends