//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
   void dfs(int sr,int sc,vector<vector<int>>&image,vector<vector<int>>&ans,int newcolor,int delrow[],int delcol[],int inicolor)

    {

        ans[sr][sc]=newcolor;

        int n=image.size();

        int m=image[0].size();

        for(int i=0;i<4;i++)

        {

            int nrow=sr+delrow[i];

            int ncol=sc+delcol[i];

            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==inicolor && ans[nrow][ncol]!=newcolor)

            {

                dfs(nrow,ncol,image,ans,newcolor,delrow,delcol,inicolor);

            }

        }

    }
     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {

        // Code here 

        int inicolor=image[sr][sc];

        vector<vector<int>>ans=image;

        int delrow[]={-1,+0,+1,+0};

        int delcol[]={+0,+1,+0,-1};

        dfs(sr,sc,image,ans,newcolor,delrow,delcol,inicolor);

        return ans;

    }
   
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends