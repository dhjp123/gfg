//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find all possible unique subsets.
    set<vector<int>>s;
    vector<vector<int>>ans;
    void solve(vector<int>A, int n,vector<int>temp,int i){

        if(i==n){

            s.insert(temp);

            return ;

        }

        solve(A,n,temp,i+1);  // not considered element 

        temp.push_back(A[i]);

        solve(A,n,temp,i+1);   // after considered the element 

        temp.pop_back();

         

     }

    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        
        // code here 
        int i=0;
        vector<int>temp;
        sort(arr.begin(),arr.end());
        solve(arr,n,temp,0);
        for(auto j:s){
            ans.emplace_back(j);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   



// } Driver Code Ends