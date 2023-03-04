//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool valid(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<valid(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends


bool valid(string s)
{
    stack<char>st;
    for(auto j:s){
        if(j=='('||j=='{'||j=='['){
            st.push(j);
        }
        else{
             if(st.empty()==true){
            return false;
        }
        if(j==')' && st.top()!='('){
            return false;
        }
         if(j=='}' && st.top()!='{'){
            return false;
        }
         if(j==']' && st.top()!='['){
            return false;
        }else{
            st.pop();
        }
        }
        
        
        
        
    }
    return  st.empty();
    
    
}