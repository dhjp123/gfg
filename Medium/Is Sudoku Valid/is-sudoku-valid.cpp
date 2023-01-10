//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int isValid(vector<vector<int>> mat){
        // code here
        unordered_set<string>uset;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(mat[i][j]!=0){
                     if(uset.find(to_string(mat[i][j]) + " found in row "+to_string(i))!=uset.end() || 
                       uset.find(to_string(mat[i][j]) + " found in column "+to_string(j))!=uset.end() ||
                       uset.find(to_string(mat[i][j]) + " found in sub box "+to_string(i/3)+"-"+to_string(j/3))!=uset.end()){
                           return 0;
                       }else{
                            uset.insert(to_string(mat[i][j]) + " found in row "+to_string(i));
                       uset.insert(to_string(mat[i][j]) + " found in column "+to_string(j));
                       uset.insert(to_string(mat[i][j]) + " found in sub box "+to_string(i/3)+"-"+to_string(j/3));
                           
                       }
                       
                    
                }
            }
        }
        return 1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<int>> mat(9, vector<int>(9, 0));
        for(int i = 0;i < 81;i++)
            cin>>mat[i/9][i%9];
        
        Solution ob;
        cout<<ob.isValid(mat)<<"\n";
    }
    return 0;
}
// } Driver Code Ends