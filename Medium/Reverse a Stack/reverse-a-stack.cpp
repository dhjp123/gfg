//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void insert(stack<int>&s,int ele){
        if(s.size()==0){
            s.push(ele);
            return;
        }
        int temp=s.top();
        s.pop();
        insert(s,ele);
        s.push(temp);
        return;
    } 
    void Reverse(stack<int> &s){
        if(s.size()==1){
            return ;
        }
        if(s.size()==0){
            return ;
        }
        int temp=s.top();
        s.pop();
        Reverse(s);
        insert(s,temp);
        return ;
        
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends