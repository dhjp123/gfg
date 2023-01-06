#include <bits/stdc++.h>
using namespace std;

int main() {
//code
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];
    
    unordered_map<int,int>mp;
    for(int i=0; i<n; i++)
    mp[arr[i]]++;
    
    priority_queue<pair<int,int>>pq;
    for(auto i:mp){
        pq.push({i.second,-1*i.first});
    }
    
    while(!pq.empty()){
        int freq = pq.top().first;
        int ele = -1*pq.top().second;
        
        for(int i=1;i<=freq; i++)
            cout<<ele<<" ";
        pq.pop();
    }
    cout<<endl;
}
return 0;
}
