//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int wordLadderLength(string startWord, string targetWord,
    vector<string>& wordList) {
        // Code here
        queue<pair<string,int>>q;
        q.push({startWord,1});
        set<string>st(wordList.begin(),wordList.end());
        st.erase(startWord);
        while(!q.empty()){
            string a= q.front().first;
            int cnt= q.front().second;
            q.pop();
            if(a==targetWord){
                return cnt;
            }
            
            for(int i=0;i<a.size();i++){
                char orgin= a[i];
                for(char ch='a';ch<='z';ch++){
                     a[i]=ch;
                    if(st.find(a)!=st.end()){
                        st.erase(a);
                        q.push({a,cnt+1});
                    }
                }
                a[i]=orgin;
                
            }
            
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<string>wordList(n);
		for(int i = 0; i < n; i++)cin >> wordList[i];
		string startWord, targetWord;
		cin >> startWord >> targetWord;
		Solution obj;
		int ans = obj.wordLadderLength(startWord, targetWord, wordList);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends