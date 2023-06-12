#include <iostream>
#include<queue>

using namespace std;

//          10
//         / \           
//        8   14
//       / \    \
//      6   9   17

class Node {

  public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
      this->data = data;
      this->left = NULL;
      this->right = NULL;
    }
};

void levelOrderTraversal(Node* &root){

  queue<Node*> q;
  q.push(root);
  q.push(NULL);

  while(!q.empty()){
    Node* temp = q.front();
    q.pop();

    if(temp == NULL){
      cout << endl;
      if(!q.empty()){
        q.push(NULL);
      }
    } else {
      cout << temp->data << " ";
      if(temp->left){
        q.push(temp->left);
      }

      if(temp->right){
        q.push(temp->right);
      }
    }
    
  }
  
}

bool searchInBST(Node* root, int key){
  if(root == NULL){
    return false;
  }

  if(key > root->data){
    return searchInBST(root->right, key);
  } else if(key < root->data){
    return searchInBST(root->left, key);
  } else {
    return true;
  }

}

Node* insertIntoBST(Node* &root, int data){  // T.C. = O(logN), N = number of nodes

  if(root == NULL){
    root = new Node(data);
    return root;
  }

  if(data > root->data){
    root->right = insertIntoBST(root->right, data);
  } else {
    root->left = insertIntoBST(root->left, data);
  }

  return root;
  
}

void takeInput(Node* &root){

  int data;
  cin >> data;

  while(data != -1){
    root = insertIntoBST(root, data);
    cin >> data;
  }
  
}

int main() {

  Node* root = NULL;

  cout << "Enter stream of digits" << endl;
  takeInput(root);

  cout << "Level order traversal of BST:" << endl;
  levelOrderTraversal(root);

  searchInBST(root, 13) ? cout << "Found" : cout << "Not Found";

  return 0;
}
