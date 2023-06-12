#include <iostream>
#include<queue>

using namespace std;

//          1
//         / \           
//        3   4
//       / \  
//      7  8  

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

Node* buildTree(Node* &root){
  cout << "Enter the data:" << endl;
  int data;
  cin >> data;
  root = new Node(data);

  if(data == -1){
    return NULL;
  }

  cout << "Enter the data to be inserted on left of " << data << endl;
  root->left = buildTree(root->left);
  cout << "Enter the data to be inserted on right of " << data << endl;
  root->right = buildTree(root->right);

  cout << root->data << endl;

  return root;
}

bool isIdentical(Node *root1, Node* root2){
  if(root1 == NULL && root2 == NULL){
    return true;
  }
  
  if(root1 != NULL && root2 == NULL){
    return false;
  }

  if(root1 == NULL && root2 != NULL){
    return false;
  }

  bool left = isIdentical(root1->left, root2->left);
  bool right = isIdentical(root1->right, root2->right);

  bool value = root1->data == root2->data;

  if(left && right && value){
    return true;
  } else {
    return false;
  }
  
}

int main() {

  Node* root = NULL;

  // 1 3 7 -1 -1 8 -1 -1 4 -1 -1
  root = buildTree(root);

  isIdentical(root1, root2);  // T.C = O(N), S.C = O(H)
  

  // T.C. = 0(N), N->number of nodes
  // S.C. = O(H),  H->height of tree
  

  return 0;
}
