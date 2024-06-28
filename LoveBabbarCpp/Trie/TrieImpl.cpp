#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

typedef struct TrieNode{
    char data;
    vector<TrieNode*> children;
    bool isTerminal;

    TrieNode(char ch){
        data = ch;
        children = vector<TrieNode*>(26, NULL);
        isTerminal = false;
    }

}TrieNode,*PTrieNode;

typedef struct Trie{
    PTrieNode root;

    Trie(){
        root = new TrieNode('\0');
    }

    void insertUtil(PTrieNode root, string word){
        
        //base case
        if(word.length() == 0){
            root->isTerminal = true;
            return;
        }
        
        int index = word[0] - 'A';
        PTrieNode child;

        //char present
        if(root-> children[index] != NULL){
            child = root->children[index];
        }
        else{
            //absent
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        insertUtil(root, word.substr(1));
    }

    void insertWord(string word){
        insertUtil(root, word);
    }

    bool searchUtil(PTrieNode root, string word){
        //base
        if(word.length() == 0){
            return root->isTerminal;
        }

        int index = word[0] - 'A';
        PTrieNode child;

        // character present
        if(root->children[index] != NULL){
            child = root->children[index];
        }    
        else{
            //character absent
            return false;
        }
    }

    bool search(string word){
        return searchUtil(root, word);
    }

}Trie,*PTrie;

int main(){
    
    PTrie t = new Trie();
    t->insertWord("ABCD");
    cout << t->search("A") << endl;
}