//{ Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
        // Function to return the length of the
        //longest subarray with ppositive product
        int maxLength(vector<int> &arr,int n){
              int maxlen=0;

          long long  int prod=1;

          

           int len=0;

           for(int i=0;i<n;i++)

           {

               if(arr[i]>0)

               {

                   arr[i]=1;

               }

               if(arr[i]<0)

               {

                   arr[i]=-1;

               }

               

               prod*=arr[i];

               len++;

               if(prod>0)

               {

                   maxlen=max(len,maxlen);

                  //cout<<prod<<" "<<endl;

               }

               if(prod==0)

               {

                   len=0;

                   prod=1;

               }

               

               

           }

           len=0;

           prod=1;

           for(int i=n-1;i>=0;i--)

           {

                if(arr[i]>0)

               {

                   arr[i]=1;

               }

                 if(arr[i]<0)

               {

                   arr[i]=-1;

               }

               prod*=arr[i];

               len++;

               if(prod>0)

               {

                   maxlen=max(maxlen,len);

               }

               if(prod==0)

               {

                   len=0;

                   prod=1;

               }

           }

           

           return maxlen;
         
           //code here
        }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i = 0;i<n;i++){
	        cin>>arr[i];
	    }
	    Solution ob;
	    int res = ob.maxLength(arr,n);
	    cout<<res<<"\n";
	}
	return 0;
}
// } Driver Code Ends