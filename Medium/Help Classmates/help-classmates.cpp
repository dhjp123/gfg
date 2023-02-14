//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        
        
       
       vector<int >right;
        stack<int>s;
        int p=-1;
        for(int i=n-1;i>=0;i--){
            if(s.size()==0){
                right.push_back(-1);
            }
            else if(s.size()>0 && s.top()<arr[i]){
                right.push_back(s.top());
            }
            else if(s.size()>0 && s.top()>=arr[i]){
                while(s.size()>0 && s.top()>=arr[i]){
                    s.pop();
                }
                 if(s.size()==0)
                 {
                   right.push_back(-1);
                 }else{
                     right.push_back(s.top());
                 }
            }
            s.push(arr[i]);
                
                    
                
        }
        reverse(right.begin(),right.end());
        
        return right;
        
        // Your code goes here
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
		vector<int> array(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>array[i];
		}
		Solution obj;
		vector<int> result = obj.help_classmate(array,n);
		for (int i = 0; i < n; ++i)
		{
			cout<<result[i]<<" ";
		}
		cout<<"\n";
	}
	return 0; 
}


// } Driver Code Ends