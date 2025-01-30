#include "header.h"
#include <iostream>
#include <sstream>
using namespace std;

// Constructor
BinaryTree::BinaryTree() { this->root = nullptr; }

// private function
void BinaryTree::insert(TreeNode *& root, string domain, string user) {
  if (root == nullptr) {
    root = new TreeNode{user, domain, nullptr, nullptr};
    return;
  } else if (root->domain == "gmail") {
    insert(root->left, domain, user);
  } else if (root->domain == "yahoo") {
    insert(root->right, domain, user);
  } else {
    insert(root->other, domain, user);
  }
}

// public function
void BinaryTree::insert(string domain, string user) {
  insert(this->root, domain, user);
}

//private display function
string BinaryTree::display(TreeNode* root) {
  stringstream output;
  if (root == nullptr) {
    return "";
  } else {
    display(root->left);
    output << root->username << "@" << root->domain << ".com" << endl;
    output << display(root->right);
    output << display(root->other);
  }
  return output.str();
}

//public display function
string BinaryTree::display() {
  return display(this->root);
}
