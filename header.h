#ifndef HEADER_H
#define HEADER_H
#include <string>
using namespace std;

struct TreeNode {
  string username; // part before the @
  string domain;   // gmail, yahoo, csusm, etc
  TreeNode *left; //gmail
  TreeNode *other; //whatever else
  TreeNode *right; //yahoo
};

class BinaryTree {
private:
  TreeNode *root; //root node
  string display_domain(TreeNode *, string);
  void insert(TreeNode *& root, string domain, string user);
  void remove(TreeNode *, string user);
  void find(TreeNode *, string user);
  string display_user(TreeNode *, string user);
  string display(TreeNode*);
public:
  BinaryTree();
  void insert(string domain, string user);
  void remove(string user); //find user with username and remove
  void find(string user); //find user with username (no username can be the same)
  string display(); // display whole tree
  string display_domain(string domain); // display all users from specified domain
  string display_user(string user); //display user with specified username
};
#endif
