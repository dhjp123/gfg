//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minThrow(int N, int arr[]){
             queue<pair<int,int>> q; 

        q.push({1,0}) ; 

        

        unordered_map<int,int> m ; 

        for(int i =0;i<N;i++){

            m[arr[2*i]] = arr[2*i+1] ;

        }

        

        

        

        while(!q.empty()){

            auto it  = q.front() ;

            q.pop() ; 

            int throws  = it.second ;

            int node = it.first ; 

            if(node == 30){

                return throws ; 

            }

            

            

            for(int i = 1 ;i<= 6 ;i++){

                int newNode  = node + i ;

                

                if(newNode <= 30){

                    // ladder

                    

                    if(m.find(newNode) != m.end()){

                        q.push({m[newNode],throws+1}) ; 

                    }

                    

                    // only moving on steps  

                    else{

                        q.push({newNode,throws+1}) ; 

                    }

                    

                    

                }

            }

            

        }

        return -1 ; 

        

        
        // code here
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[2*N];
        for(int i = 0;i < 2*N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.minThrow(N, arr)<<"\n";
    }
    return 0;
}
// } Driver Code Ends