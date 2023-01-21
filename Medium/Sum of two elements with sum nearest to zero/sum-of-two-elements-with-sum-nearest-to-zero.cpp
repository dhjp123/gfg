//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
            // your code here
            sort(arr,arr+n);
            int i=0;
            int j=n-1;
            int sum ;
            int ans=INT_MAX;
            while(i<j){
                sum=arr[i]+arr[j];
                if(abs(sum)<abs(ans)){
                    ans= sum;
                }
                if(abs(sum)==abs(ans)){
                    ans= max(ans,sum);
                }
                if(sum==0){
                    return 0;
                }
                if(sum<0){
                    i++;
                }
                if(sum>0){
                    j--;
                }
                
                
            }
            return ans;
        }
};

//{ Driver Code Starts.
int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    }
}
// } Driver Code Ends