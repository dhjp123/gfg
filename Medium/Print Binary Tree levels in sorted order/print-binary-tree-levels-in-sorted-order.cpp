//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    vector <vector <int>> binTreeSortedLevels (int arr[], int n)
    {
       
       vector<vector<int>>ans;
       queue<int>q;
       int i=0;
       q.push(arr[i]);
        //vector<int>res;
       while(!q.empty()){
           int t= q.size();
            //int size=k.size();
            vector<int>res;



            while(t--)

            {

                res.push_back(q.front());

                q.pop();

                

                if((2*i+1)<n)

                q.push(arr[2*i+1]);

                

                if((2*i+2)<n)

                q.push(arr[2*i+2]);

                i++;

            }
            sort(res.begin(),res.end());
            ans.push_back(res);

            
          
          
           
       }
      
      
       return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int arr[n];
		for (int i = 0; i < n; ++i)
			cin >> arr[i];

        Solution ob;
        
		vector <vector <int>> res = ob.binTreeSortedLevels (arr, n);
		for (int i = 0; i < res.size(); ++i)
		{
			for (int j = 0; j < res[i].size(); ++j)
			{
				cout << res[i][j] << " ";
			}
			cout << endl;
		}
	}
}

// Contributed By: Pranay Bansal
// } Driver Code Ends