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

pair <int, int> diameterFast(Node* root){   // <int(diameter) , int(height)>
  if(root == NULL){
    pair <int, int> p = make_pair(0, 0);
    return p;
  }

  pair <int, int> left = diameterFast(root->left);
  pair <int, int> right = diameterFast(root->right);

  int leftPart = left.first;
  int rightPart = right.first;
  int bothPart = left.second + right.second + 1;

  pair <int, int> ans;
  ans.first = max(leftPart, max(rightPart, bothPart));
  ans.second = max(left.second, right.second) + 1;

  return ans;

  
}

int diameter(Node* &root){
  
  return diameterFast(root).first;
}

int main() {

  Node* root = NULL;

  // 1 3 7 -1 -1 8 -1 -1 4 -1 -1
  root = buildTree(root);

  cout << "Diameter of BT: " << diameter(root) << endl;

  // T.C. = 0(N), N->number of nodes
  // S.C. = O(H),  H->height of tree

  return 0;
}
