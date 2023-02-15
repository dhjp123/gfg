//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
   
   
    bool ispar(string &str)
    {
        stack<char>s;
        for(char x:str){
            if(x=='(' ||x=='{' || x=='['){
                s.push(x);
            }
            else
            {
                if(s.empty()==true){
                    return false;
                }
                
                if(x==')'&& s.top()!='('){
                    return false;
                }
                if(x=='}'&& s.top()!='{'){
                    return false;
                }
                if(x==']'&& s.top()!='['){
                    return false;
                }
                else{
                    s.pop();
                }
                
                
                
            }
        }
        return s.empty();
        // Your code here
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends