//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    /*You are required to complete this method */
    vector<int> nsl(int arr[],int n){
        vector<int>ans;
        stack<int>s;
        for(int i=0;i<n;i++){
            if(s.size()==0){
                ans.push_back(0);
            }
            else if(s.size()>0 && s.top()<arr[i]){
                ans.push_back(s.top());
            }
            else if(s.size()>0 && s.top()>=arr[i]){
                while(s.size()>0 && s.top()>=arr[i]){
                    s.pop();
                }
                if(s.size()==0){
                    ans.push_back(0);
                }
                else{
                    ans.push_back(s.top());
                }
            }
            s.push(arr[i]);
        }
        return ans;
    }
    vector<int> nsr (int arr[],int n){
        stack< int>s;
        vector<int>ans;
        for(int i=n-1;i>=0;i--){
            if(s.size()==0){
                ans.push_back(0);
            }
            else if(s.size()>0 && s.top()<arr[i])
            {
                ans.push_back(s.top());
            }
            else if(s.size()>0 && s.top()>=arr[i]){
                while(s.size()>0 && s.top()>=arr[i]){
                    s.pop();
                }
                if(s.size()==0){
                    ans.push_back(0);
                }else{
                    ans.push_back(s.top());
                }
            }
            s.push(arr[i]);
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
        
    
    int findMaxDiff(int arr[], int n)
    {
        vector<int>ls=nsl(arr,n);
        vector<int>rs=nsr(arr,n);
        int sexy=INT_MIN;
        for(int i=0;i<n;i++){
            sexy=max(sexy,abs(ls[i]-rs[i]));
            
        }
        return  sexy;
      //Your code here
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
   	int a[n];
   	for(int i=0;i<n;i++)
   	cin>>a[i];
   	Solution ob;
   	cout<<ob.findMaxDiff(a,n)<<endl;
   }
    return 0;
}



// } Driver Code Ends