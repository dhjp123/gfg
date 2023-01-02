//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// design the class in the most optimal way

class LRUCache
{
    private:
      list<pair<int,int>> lru;
        unordered_map<int, list<pair<int,int>>::iterator> mp;
        int cap;

    public:
    //Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap)
    {
        // code here
        this->cap = cap;
    }
    
    //Function to return value corresponding to the key.
    int GET(int key)
    {
        // your code here
        if(mp.count(key) == 0) return -1;
        
        auto it = mp[key];
        int val = it->second;
        lru.erase(it);
        lru.push_front({key,val});
        mp[key] = lru.begin();
        
        return mp[key]->second;
    }
    
    //Function for storing key-value pair.
    void SET(int key, int value)
    {
        // your code here  
        if(mp.count(key)) {
            lru.erase(mp[key]);
        } else if(lru.size() == cap) {
            int delKey = lru.back().first;
            lru.pop_back();
            mp.erase(delKey);
        }
            
        lru.push_front({key,value});
        mp[key] = lru.begin();
    }
   
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);
        
        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->SET(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->GET(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends