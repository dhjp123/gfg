//{ Driver Code Starts
// Program to find best buying and selling days
#include <bits/stdc++.h>

using namespace std;

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int *, int);

// Driver program to test above functions
int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, i;
        cin >> n;
        int price[n];
        for (i = 0; i < n; i++) cin >> price[i];
        // function call
        stockBuySell(price, n);
    }
    return 0;
}

// } Driver Code Ends


// User function template for C++

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int price[], int n)
{
    int low=0,high=1,count=0;
    while(high<n)
    {
        if(price[high]>price[high-1])
            high++;
        else
        {
            if(low!=high-1)
            {
                cout<<"("<<low<<" "<<high-1<<") ";
                low=high++;
                count++;
            }
            else
            low=high++;
        }
    }
    if(price[high-1]>price[high-2])
        cout<<"("<<low<<" "<<high-1<<") ";
    else
        if(count==0)
        cout<<"No Profit";
    cout<<endl;
    // code here
}