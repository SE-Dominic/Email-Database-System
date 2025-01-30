#include <iostream>
#include "header.h"
int main() {
  //Test OFTEN
  BinaryTree tree;
  tree.insert("gmail", "dominic.allen998");
  tree.insert("yahoo", "awheaton24");
  cout << tree.display() << endl;
}
