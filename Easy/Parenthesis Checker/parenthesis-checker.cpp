//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> stack;
        for(auto i : x){
            if(i=='{' || i=='(' || i=='[') stack.push(i);
            else{
                if(stack.empty()) return false;
                else if(!stack.empty()){
                    if(i==')' && stack.top() == '(') stack.pop();
                    else if(i=='}' && stack.top() == '{') stack.pop();
                    else if(i==']' && stack.top() == '[') stack.pop();
                    else return false;
                }
            }
        }
        if(!stack.empty()) return false;
        return true;
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