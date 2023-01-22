//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int solve(int N, int K, vector<int> &arr) {
        
        for(int i=1;i<N;i++) arr[i]+=arr[i-1];

        vector<int>temp;

        for(int i=1;i*i<=arr[N-1];i++) {

            if(arr[N-1]%i==0) {

                temp.push_back(i);

                temp.push_back(arr[N-1]/i);

            }

        }

        

        int ans=1;

        for(int gd :temp) {

            int cnt=0;

            for(int y : arr) {

                if(y%gd==0) {

                    cnt++;

                }

            }

            if(cnt>=K) ans=max(ans,gd);

        }

        return ans;


        // code here
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        
        vector<int> arr(N);
        Array::input(arr,N);
        
        Solution obj;
        int res = obj.solve(N, K, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends