#include <iostream>

using namespace std;

class TrieNode {
  public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch){
      this->data = ch;
      for(int i=0; i<26; i++){
        children[i] = NULL;
      }
      isTerminal = false;
    }    
    
};

class Trie {
  public:
    TrieNode* root;

    Trie(){
      root = new TrieNode('\0'); 
    }

    void insertUtil(TrieNode* root, string word){
      // base case
      if(word.length() == 0){
        root->isTerminal = true;
        return;
      }

      // word will be in uppercase
      int index = word[0] - 'A';
      TrieNode* child;

      // Present
      if(root->children[index] != NULL){
        child = root->children[index]; 
      } else{  // Absent
        child = new TrieNode(word[0]);
        root->children[index] = child;
      }

      // recursion
      insertUtil(child, word.substr(1));
      
    }

    void insertWord(string word){
      insertUtil(root, word);
    }

    bool searchUtil(TrieNode* root, string word){

      // base case
      if(word.length() == 0){
        return root->isTerminal;   
      }

      int index = word[0] - 'A';
      TrieNode* child;

      // Present
      if(root->children[index] != NULL){
        child = root->children[index];
      } else { // absent
        return false;
      }

      //recursion
      return searchUtil(child, word.substr(1));
      
    }

    void search(string word){
      if(searchUtil(root, word)){
        cout << word << " is present" << endl;
      } else {
        cout << word << " is not present" << endl;
      }
    }
};

int main() {

  Trie *t = new Trie();

  t->insertWord("ABCD");
  t->insertWord("PATIL");

  t->search("ABCD");
  t->search("ABCd");
  t->search("PATIL");
  
  return 0;
}
