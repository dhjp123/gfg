//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int wordLadderLength(string startword, string targetword, vector<string>& wordList) {
       queue<pair<string,int>>q;
       q.push({startword,1});
       unordered_set<string>s(wordList.begin(),wordList.end());
       s.erase(startword);
       while(!q.empty()){
           string pr= q.front().first;
           int step= q.front().second;
           q.pop();
           if(pr==targetword){
               return step;
           }
           for(int i=0;i<pr.size();i++){
               char orgi= pr[i];
               for(char ch='a';ch<='z';ch++){
                   pr[i]=ch;
                   if(s.find(pr)!=s.end()){
                       s.erase(pr);
                       q.push({pr,step+1});
                   }
                   
               }
               pr[i]=orgi;
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