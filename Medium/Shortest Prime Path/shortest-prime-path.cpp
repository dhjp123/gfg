//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{ 
     bool isPrime(string &s) {
        int n = stoi(s);
        for(int i=2; i<=sqrt(n); i++) {
            if(n % i == 0) return false;
        }
        return  true;
    }
  public:
    int shortestPath(int Num1,int Num2)
    {   
        // Complete this function using prime vector
         string n1 = to_string(Num1), n2 = to_string(Num2);

        queue<string> q;
        q.push(n1);
        int ans = 0;
        unordered_set<string> vis;
        
        while(q.size()) {
            int n = q.size();
            
            while(n--) {
                string temp = q.front(); q.pop();
                string prev = temp;
                if(prev == n2) return ans;
                
                for(int i=0; i<4; i++) {
                    for(char c='0'; c<='9'; c++){
                        temp[i] = c;
                        if(isPrime(temp) && temp[0] != '0' && vis.find(temp) == vis.end()) {
                            q.push(temp);
                            vis.insert(temp);
                        }
                    }
                    temp = prev;
                }
            }
            ans++;
        }
        return -1;
    }
};


//{ Driver Code Starts.
signed main()
{
    int t;
    cin>>t;
    Solution obj;
    while(t--)
    {
        int Num1,Num2;
        cin>>Num1>>Num2;
        int answer=obj.shortestPath(Num1,Num2);
        cout<<answer<<endl;
    }
}
// } Driver Code Ends