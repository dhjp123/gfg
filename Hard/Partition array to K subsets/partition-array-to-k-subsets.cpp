//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
   bool check(int a[],int n,int k,int sum,int count,int r)

  {

      if(r==0)

      {

          count++;

          r=sum/k;

      }

      if(r<0)

      {

          return false;

      }

      if(count==k)

      {

          return true;

      }

      for(int i=0;i<n;i++)

      {

          if(a[i]!=INT_MAX)

          {

              int b=a[i];

              a[i]=INT_MAX;

              if(check(a,n,k,sum,count,r-b))

              return true;

              a[i]=b;

          }
      }
      return false;
  }
  bool isKPartitionPossible(int a[], int n, int k)

    {

         //Your code here

         int sum=0;

         for(int i=0;i<n;i++)

         {

             sum+=a[i];

         }

         if(sum%k!=0)

         return false;

         return check(a,n,k,sum,0,sum/k);

    }
   
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	
    	cin>>n;
    	int a[n];
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	int k;
    	cin>>k;
    	Solution obj;
    	cout<<obj.isKPartitionPossible(a, n, k)<<endl;
    }
}
// } Driver Code Ends