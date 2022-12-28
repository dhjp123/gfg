//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> asteroidCollision(int N, vector<int> &asteroids) {
        // code here
        stack<int>st;

        vector<int>ans;

        for(int i=0;i<N;i++)

        {

            int curr=asteroids[i];

            if(curr>0)

            {

                st.push(curr);

            }

                // jab Negative Asteroid aata he tab.

            else

            {

                while(st.size()>0 && st.top()<-curr)

                {

                    st.pop();// current  vala Element bada ho

                }

                if(st.size()>0 && st.top()==-curr)

                {

                    st.pop();// current vala element eqaul ho

                }

                else if(st.size()>0 && st.top()>-curr){

                    //current Elemnt chhota ho

                }

                else

                {

                    ans.push_back(curr);

                }

            }

        }

        

        vector<int> res;

        

        while(!st.empty())

        {

            res.push_back(st.top());

            st.pop();

            

        }

        reverse(res.begin(), res.end());

        for(int i=0;i<res.size();i++)

        {

            ans.push_back(res[i]);

        }

        return ans;

    
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> asteroids(N);
        for (int i = 0; i < N; i++) cin >> asteroids[i];

        Solution obj;
        vector<int> ans = obj.asteroidCollision(N, asteroids);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends