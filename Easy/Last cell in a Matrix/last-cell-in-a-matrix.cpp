//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    pair<int,int> endPoints(vector<vector<int>> matrix, int R, int C){
        //code here
        int delrow[] = {-1,0,1,0};

        int delcol[] = {0,1,0,-1};

        int i=0,j=0,dir =1;

        int curr_i = 0;

        int curr_j=0;

        while(i>=0 && i<R && j>=0 && j<C)

        {

            curr_i = i;

            curr_j = j;

            if(matrix[i][j] == 0)

            {

                i+= delrow[dir];

                j+= delcol[dir];

            }

            else 

            {

                dir = (dir+1)%4;

                matrix[i][j] = 0;

                i+= delrow[dir];

                j+= delcol[dir];

            }

        }

        return {curr_i,curr_j};
        
    }
};

//{ Driver Code Starts.


int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int row, col;
		scanf("%d", &row);
		scanf("%d", &col);
		vector<vector<int>> matrix(row , vector<int> (col));
	 
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
			    cin>>matrix[i][j];
			}
		}
		Solution obj;
		pair<int,int> p = obj.endPoints(matrix, row, col);
		
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}
	return 0;
}
// } Driver Code Ends