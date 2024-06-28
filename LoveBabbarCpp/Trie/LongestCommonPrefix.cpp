#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

class TrieNode {
public:
    unordered_map<char, TrieNode*> children;
    int count;

    TrieNode() {
        count = 0;
    }
};

class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode();
    }

    void insert(const string& word) {
        TrieNode* node = root;
        for (char ch : word) {
            if (node->children.find(ch) == node->children.end()) {
                node->children[ch] = new TrieNode();
            }
            node = node->children[ch];
            node->count++;
        }
    }

    string longestCommonPrefix() {
        string prefix;
        TrieNode* node = root;

        while (node) {
            if (node->count != 0 && node->children.size() == 1) {
                auto it = node->children.begin();
                if (it->second->count == node->count) {
                    prefix += it->first;
                    node = it->second;
                } else {
                    break;
                }
            } else {
                break;
            }
        }

        return prefix;
    }
};

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) {
        return "";
    }

    Trie trie;
    for (const string& word : strs) {
        trie.insert(word);
    }

    return trie.longestCommonPrefix();
}

int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    string result = longestCommonPrefix(strs);
    cout << "Longest Common Prefix: " << result << endl;
    return 0;
}
