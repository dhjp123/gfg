//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	int dx[8] = {-1 , -1 , 0 , 1, 1 , 1 ,0 , -1};
   int dy[8]=  {0 , 1 ,1 , 1 ,0 , -1 , - 1, -1};
   
   void dfs(int x , int y , int ind , string word , vector<vector<char>>grid , int drc , bool &flag)
   {
       if(ind==word.size())
       {
           flag = true; 
           return ;
       }
       
       int nx = x+dx[drc];
       int ny = y+dy[drc];
       
       if(nx>=0 && ny>=0 && nx < grid.size() && ny < grid[0].size()  && grid[nx][ny]==word[ind])
       {
           dfs(nx , ny , ind+1 , word , grid , drc , flag);
       }
       
   
   }
   vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
   
   int m = grid.size();
   int n = grid[0].size();
   bool flag = false;
   vector<vector<int>>ans;
   
   for(int i = 0 ; i< m ; i++)
   {
       for(int j = 0 ; j< n ; j++)
       {
           flag = false;
           if(grid[i][j]==word[0])
           {
                if(word.size()==1)  ans.push_back({i,j});
                else
                for(int k = 0 ; k<8 ; k++)
                {
                   int nx = i+dx[k];
                   int ny = j+dy[k];
                   
                   
                   if(nx>=0 && ny>=0 && nx < m && ny < n && grid[nx][ny] == word[1] && flag ==false)
                   {
                        dfs(nx , ny , 2 ,word , grid , k , flag);
                       
                       if(flag) ans.push_back({i , j});
                   }
                   
               }
               
           }
           
       }
       
   }
   
   return ans ;
   
   
}
	
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
	}
	return 0;
}
// } Driver Code Ends