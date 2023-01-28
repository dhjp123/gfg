//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Trie{
    Trie *children[2];
    public:
    Trie(){
        children[0]=children[1]=NULL;
    }
    void insert(int a){
        int bit=(1<<19);
        Trie *x=this;
        while(bit && x->children[!!(bit&a)])
            x=x->children[!!(bit&a)],bit>>=1;
        while(bit){
            Trie *te=new Trie();
            x->children[!!(bit&a)]=te;
            x=x->children[!!(bit&a)];
            bit>>=1;
        }
    }
    int search(int a){
        int ans=0;
        Trie *x=this;
        for(int bit=(1<<19);bit>0;bit>>=1){
            int curr = !!(a&bit);
            if(x->children[!curr])
                ans|=bit,x=x->children[!curr];
            else
                x=x->children[curr];
        }
        return ans;
    }
};

class Solution
{
    public:
    int max_xor(int arr[] , int n)
    {
        //code here
        
        int ans=0;
        Trie *trie = new Trie();
        trie->insert(arr[0]);
        for(int i=1;i<n;i++){
            ans=max(ans,trie->search(arr[i]));
            trie->insert(arr[i]);
        }
        return ans;

    }
    
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];

        Solution ob;
		cout << ob.max_xor(a, n) << endl;

	}
}



// } Driver Code Ends