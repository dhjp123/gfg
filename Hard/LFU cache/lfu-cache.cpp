//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++



struct node{

        int key;

        int value;

        int cnt;

        node* prev;

        node* next;

        node(int _key, int _value){

            key = _key;

            value = _value;

            cnt = 1;

        }

};

struct List{

        int size;

        node* head;

        node* tail;

 

        List(){

            head = new node(0,0);

            tail = new node(0,0);

            size = 0;

            head->next = tail;

            tail->prev = head;

        }

        void addNode(node* newnode){

            node* temp = head->next;

            newnode->next = temp;

            newnode->prev = head;

            head->next = newnode;

            temp->prev = newnode;

            size++;

        }

        void deleteNode(node* delNode){

            node* delNext = delNode->next;

            node* delPrev = delNode->prev;

            delNext->prev = delPrev;

            delPrev->next = delNext;

            size--;

        }

};

 

class LFUCache {

    map<int,List*> freqList;

    map<int,node*> keyNode;

    int maxSize;

    int currSize;

    int minFreq;

public:

    LFUCache(int capacity) {

        maxSize = capacity;

        currSize = 0;

        minFreq = 0;

    }

    

    void updateFreqListMap(node* temp){

        keyNode.erase(temp->key);

        freqList[temp->cnt]->deleteNode(temp);

        if(temp->cnt==minFreq && freqList[temp->cnt]->size ==0){

            minFreq++;

        }

        List* nextHigherFreqList = new List();

        if(freqList.find(temp->cnt+1)!=freqList.end()){

            nextHigherFreqList = freqList[temp->cnt+1];

        }

        temp->cnt += 1;

        nextHigherFreqList->addNode(temp);

        freqList[temp->cnt] = nextHigherFreqList;

        keyNode[temp->key] = temp;

 

    }

    

    int get(int key) {

        if(keyNode.find(key)!=keyNode.end()){

            node* temp = keyNode[key];

            int val = temp->value;

            updateFreqListMap(temp);

            return val;

        }

        return -1;

    }

    

    void put(int key, int value) {

        if(maxSize==0){

            return;

        }

        if(keyNode.find(key)!=keyNode.end()){

            node* temp = keyNode[key];

            temp->value = value;

            updateFreqListMap(temp);

        }

        else{

            if(currSize==maxSize){

                List* list = freqList[minFreq];

                node* LRU = list->tail->prev;

                keyNode.erase(LRU->key);

                list->deleteNode(LRU);

                currSize--;

            }

            currSize++;

            minFreq = 1;

            List* lst = new List();

            if(freqList.find(minFreq)!=freqList.end()){

                lst = freqList[minFreq];

            }

            node* tmp = new node(key,value);

            lst->addNode(tmp);

            keyNode[key] = tmp;

            freqList[minFreq] = lst;

        }

    }


};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

//{ Driver Code Starts.

int main(){
    int t = 1;
    cin >> t;

    while(t--){
        int capacity; cin >> capacity;
        LFUCache* obj = new LFUCache(capacity);

        int runs; cin >> runs;
        for(int i = 0;i<runs;i++){
            int s; cin >> s;
            if(s==1){
                int key; cin >> key;
                int param_1 = obj->get(key);
                cout << param_1 << endl;
            }else{
                int key,value;
                cin >> key >> value;
                obj->put(key,value);
            }
            
            
            
        }
        


    }
}

// } Driver Code Ends