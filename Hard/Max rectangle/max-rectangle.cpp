//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
  
 
 
 


    vector<int>NSR(vector<int>& heights)
    {
        vector<int>v;
        int size= heights.size();
        stack<pair<int, int>>st;
        for(int i=size-1; i>=0;i--)
        {
            while(!st.empty() && st.top().first>=heights[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                v.push_back(size);
            }
            else if(!st.empty() && st.top().first< heights[i])
            {
                v.push_back(st.top().second);
            }
            st.push({heights[i],i});
        }
        reverse(v.begin(), v.end());
        return v;
    }
    vector<int>NSL(vector<int>& heights)
    {
        vector<int>v;
        stack<pair<int, int>>st;
        
        int size= heights.size();
        for(int i=0; i<size;i++)
        {
            while(!st.empty() && st.top().first>=heights[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                v.push_back(-1);
            }
            else if(!st.empty() && st.top().first<heights[i])
            {
                v.push_back(st.top().second);
            }
            st.push({heights[i],i});
        }
        return v;
    }
    
    int largestRectangleArea(vector<int>& heights) 
    {
        int max_area=0;
        vector<int>nl= NSL(heights);
        vector<int>nr= NSR(heights);
        int n= heights.size();
        for(int i=0; i<n;i++)
        {
            int area = (nr[i]-nl[i]-1)*heights[i];
            max_area= max(max_area, area);
        }
        return max_area;
        
    }
    int maxArea(int matrix[MAX][MAX], int m, int n)
    {
        int rect_area=0;
        if(m==0)
            return rect_area;
        vector<int>v(n,0);
        for(int i=0; i<m;i++)
        {
            for(int j=0; j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    v[j]=0;
                }
                else
                {
                    v[j]= v[j]+1;
                }
            }
            rect_area= max(rect_area, largestRectangleArea(v));
        }
        return rect_area;  
    }
  
      
    
    


   
   
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends