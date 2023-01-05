#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	   // int a[n];
	    deque<int>q;
	    //vector<int>v;
	    
	    for(int i=1;i<=n;i++){
	        q.push_back(i);
	        
	    }
	    while(q.size()!=1){
	        for(int i=0;i<k;i++){
	            if(q.size()==1)break;
	            q.pop_front();
	        }
	         for(int i=0;i<k;i++){
	            if(q.size()==1)break;
	            q.pop_back();
	        }
	    }
	    cout<<q.front()<<endl;
	}
	return 0;
}