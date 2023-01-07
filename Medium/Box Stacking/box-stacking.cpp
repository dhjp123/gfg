//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
    public:
    /*The function takes an array of heights, width and 
    length as its 3 arguments where each index i value 
    determines the height, width, length of the ith box. 
    Here n is the total no of boxes.*/
   
   bool check(int i,int prev,vector<vector<int>>& a)

    {

       if (a[i][0]>a[prev][0] && a[i][1]>a[prev][1] && ( (a[i][0]*a[i][1])> (a[prev][0]*a[prev][1])))

            return 1;

        else 

            return 0;

    }
    int LIS(int i,int prev,vector<vector<int>>& a,vector<vector<int>>&dp)

    {

        if(i==a.size()) return 0;

        

        if(dp[i][prev+1]!=-1) return dp[i][prev+1];

        

        int pick=0;

        if(prev==-1 || check(i,prev,a))

        {

            pick=a[i][2]+LIS(i+1,i,a,dp);

        }

        int notPick=LIS(i+1,prev,a,dp);

        

        return dp[i][prev+1]= max(pick,notPick);

        

    }
    
    
        
    
    int maxHeight(int height[],int width[],int length[],int n)
    {
        //Your code here
          vector<vector<int>>cuboid;
          vector<vector<int>>dp(6*n,vector<int>(6*n+1,-1)); 

         for(int i=0;i<n;i++)

         {

            cuboid.push_back({width[i],height[i],length[i]});

            cuboid.push_back({length[i],width[i],height[i]});

            cuboid.push_back({length[i],height[i],width[i]});

            cuboid.push_back({width[i],length[i],height[i]});

            cuboid.push_back({height[i],length[i],width[i]});

            cuboid.push_back({height[i],width[i],length[i]});
           
           
           
           
            

         }
         sort(cuboid.begin(),cuboid.end());
         return LIS(0,-1,cuboid,dp);

    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
        int n;
        cin>>n;
        
    
        int A[105],B[105],C[105];
        for(int i = 0; i < n; i++)cin >> A[i];
        for(int j = 0; j < n; j++)cin >> B[j];
        for(int k = 0; k < n; k++)cin >> C[k];
        Solution ob;
        cout<<ob.maxHeight(A,B,C,n)<<endl;
    }
	
	return 0;
}
	
// } Driver Code Ends