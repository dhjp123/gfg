//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    
    bool a[100000];
    long long dhruv[100000],s=0;
    
    void verma(int n)
    {
        memset(a,true,sizeof(a));
        a[1]=false;
        for(int i=2; i*i<=n; i++)
        {
            if(a[i])
            {
                for(int j=2*i; j<=n; j+=i)
                    a[j]=false;
            }
        }
        for(int i=2; i<=n; i++)
        {
            if(a[i])
                dhruv[s++]=i;
        }
    }
    
    long long calc(long long s, long long cur, long long k)
    {
		long long newCur = dhruv[s]*dhruv[s]*cur;
		long long res=0;
		if(newCur>k)
            return 0;
		res += k/(newCur);
		res += calc(s+1,cur,k);
		res -= calc(s+1,newCur,k);
		return res;
    }
    
    long long sqNum(long long N) {
        
        verma(100000);
        
        long long ans = calc(0,1,N);
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.sqNum(N) << endl;
    }
    return 0;
}
// } Driver Code Ends